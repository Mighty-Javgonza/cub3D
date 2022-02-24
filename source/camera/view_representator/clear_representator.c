/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_representator.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:53:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:15:23 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"
#include "../../../libft/libft.h"

void	clear_representator(t_view_representator *vr)
{
	size_t	pixel_count;

	pixel_count = vr->res.x * vr->res.y;
	ft_memset(vr->draw_buffer, 0, pixel_count * sizeof(*vr->draw_buffer));
	ft_memset(vr->painted_pixels, 0, pixel_count * sizeof(*vr->painted_pixels));
	vr->painted_pixels_count = 0;
}
