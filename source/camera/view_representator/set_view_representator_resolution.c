/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_view_representator_resolution.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:32:56 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 14:40:18 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"
#include <stdio.h>
#include "../../../libft/libft.h"
#include "../../error/error.h"

static void	initialize_painted_pixels(t_view_representator *vr)
{
	size_t	array_size;

	array_size = sizeof(*vr->painted_pixels) * vr->res.x * vr->res.y;
	vr->painted_pixels = malloc(array_size);
	if (!vr->painted_pixels)
		exit_and_message("Couldn't allocate painted_pixels buffer\n");
	ft_memset(vr->painted_pixels, 0, array_size);
}

void	set_view_representator_resolution(t_view_representator *vr, t_resolution res)
{
	vr->res = res;
	if (vr->draw_buffer != NULL)
		destroy_view_representator(vr);
	vr->draw_buffer = malloc(sizeof(*vr->draw_buffer) * res.x * res.y);
	if (!vr->draw_buffer)
		exit_and_message("Couldn't allocate draw buffer\n");
	initialize_painted_pixels(vr);
	vr->plane.width = DEFAULT_PLANE_WIDTH;
	vr->plane.height = vr->plane.width * res.y / res.x;
}
