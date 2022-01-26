/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_pixel.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:49:12 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 18:46:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../world/world.h"

void	camera_render_pixel(t_camera *cam, t_world *world, size_t index)
{
	t_ray_collider	shooter;
	t_collision		col;

	shooter = camera_pixel_to_ray(cam, index);
	col = collide_ray_world(&shooter, world);
	if (col.exists)
		cam->draw_buffer[cam->res_x * (cam->res_y / 2) + index] = 0xFF0000;
}
