/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_view_representator.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:17:50 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 13:40:28 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../camera.h"

void	destroy_view_representator(t_view_representator *vr)
{
	if (vr->draw_buffer != NULL)
		free(vr->draw_buffer);
}
