/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_candidate_segment.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:56:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:32:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../textures/textures.h"
#include "../parsing/parsing.h"

void	camera_render_candidate_segment(t_camera *cam,
			t_collision_candidate *candidate, size_t segment_index)
{
	t_wall_slice_interpolator	interpolator;
	t_graphic_image				*texture;

	texture = candidate->col->parent_wall->texturizer.textures[segment_index];
	interpolator = camera_get_interpolator_from_segment(cam, candidate,
			segment_index);
	cam->current_render_x_pixel = interpolator.space_in_screen.start;
	if (interpolator.can_be_painted)
		paint_interpolated_slices(cam, interpolator, texture);
}
