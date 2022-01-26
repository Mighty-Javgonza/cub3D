/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_camera.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:22:43 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 13:09:32 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

t_camera	init_camera()
{
	t_camera	rvalue;

	rvalue = (t_camera)
	{
		.pos = {0, 0},
		.direction = {1, 0},
		.plane_distance = DEFAULT_PLANE_DISTANCE,
		.plane_width = DEFAULT_PLANE_WIDTH,
		.res_x = DEFAULT_CAMERA_RES_X,
		.res_y = DEFAULT_CAMERA_RES_Y,
		.draw_buffer = NULL,
	};
	restart_draw_buffer(&rvalue);
	rvalue.distances_to_plane = malloc(sizeof(*rvalue.distances_to_plane) * DEFAULT_CAMERA_RES_X);
	return (rvalue);
}
