/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_pixel.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:49:12 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 11:29:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../world/world.h"

void	camera_render_pixel(t_camera *cam, t_world *world, size_t x_pixel)
{
	t_collision				col;
	t_wall_slice_painter	slice;

	cam->current_render_x_pixel = x_pixel;
	col = collision_from_camera_pixel(cam, world, x_pixel);
	if (col.exists)
	{
		slice = calculate_paint_slice(cam, col);
		paint_wall_slice(cam, slice, ((t_bound_collider *)col.target)->parent_wall->texturizer.textures[col.target_id]);
	}
}
