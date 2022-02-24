/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_camera.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:22:43 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:19:53 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

t_camera	init_camera(void)
{
	t_camera	rvalue;

	rvalue = (t_camera)
	{
		.pos = {0, 0},
		.direction = {1, 0},
		.representator = init_view_representator(),
		.z_axis_pos = 0.5,
		.collision_candidates = NULL,
		.collision_candidates_count = 0,
	};
	set_view_representator_resolution(&rvalue.representator,
		(t_pixpos){DEFAULT_CAMERA_RES_X, DEFAULT_CAMERA_RES_Y});
	rvalue.distances_to_plane = malloc(sizeof(*rvalue.distances_to_plane)
			* DEFAULT_CAMERA_RES_X);
	calculate_distances_to_plane(&rvalue);
	return (rvalue);
}
