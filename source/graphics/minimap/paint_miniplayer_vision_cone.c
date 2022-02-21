/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_miniplayer_vision_cone.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:43:45 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 13:49:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimap.h"
#include "../graphics.h"

void	paint_miniplayer_vision_cone(t_minimap *mp)
{
	size_t	i;
	t_ray_collider	rc;
	t_collision		col;
	t_segment		ray_to_col;

	i = 0;
	while (i < camera_get_res_x(&mp->world->player.cam))
	{
		rc = camera_pixel_to_ray(&mp->world->player.cam, i);
		col = collide_ray_world(&rc, mp->world);
		if (col.exists)
		{
			ray_to_col.p1 = rc.origin;
			ray_to_col.p2 = col.pos;
			paint_segment(&mp->img, &ray_to_col);
		}
		else
			paint_ray_collider(&mp->img, &rc);
		i++;
	}
}
