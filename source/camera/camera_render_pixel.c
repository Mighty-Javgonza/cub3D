/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_pixel.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:49:12 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/04 12:37:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../world/world.h"

void	camera_render_pixel(t_camera *cam, t_world *world, size_t x_pixel)
{
	t_ray_collider	shooter;
	t_collision		col;

	cam->current_render_x_pixel = x_pixel;
	shooter = camera_pixel_to_ray(cam, x_pixel);
	col = collide_ray_world(&shooter, world);
	if (col.exists)
		paint_y_axis(cam, col);
}
