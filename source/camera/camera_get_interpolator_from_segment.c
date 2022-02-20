/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_get_interpolator_from_segment.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:02:54 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/19 19:20:46 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>

t_wall_slice_interpolator	camera_get_interpolator_from_segment(t_camera *cam, t_collision_candidate *candidate, size_t segment_index)
{
	t_wall_slice_interpolator	interpolator;
	t_camera_range				segment_range;
	t_collision					start_col;
	t_collision					end_col;
	t_segment					segment;
	t_segment					segment_in_world;
	t_segment					segment_as_seen_from_camera;

	segment = candidate->col->segments[segment_index];
	segment_in_world = add_segment_vector(segment, candidate->col->pos);
	segment_range = get_segment_range(cam, segment, candidate->col->pos);
	segment_range.start += 1;
	segment_range.end -= 1;
	interpolator.can_be_painted = 0;
	//if (!pixel_is_in_camera_bounds(cam, segment_range.start) && !pixel_is_in_camera_bounds(cam, segment_range.end))
	//	return (interpolator);
	if (/*pixel_is_in_camera_bounds(cam, segment_range.start) && */!pixel_is_in_camera_bounds(cam, segment_range.end))
		segment_range.end = cam->res_x - 1;
	if (!pixel_is_in_camera_bounds(cam, segment_range.start)/* && pixel_is_in_camera_bounds(cam, segment_range.end)*/)
		segment_range.start = 0;
	segment_as_seen_from_camera = sub_segment_vector(segment_in_world, cam->pos);
	start_col = collision_from_camera_pixel_with_segment(cam, segment_range.start, &segment_in_world);
	if (start_col.exists)
	{
		start_col.target = candidate->col;
		start_col.target_id = segment_index;
	}
	end_col = collision_from_camera_pixel_with_segment(cam, segment_range.end, &segment_in_world);
	if (end_col.exists)
	{
		end_col.target = candidate->col;
		end_col.target_id = segment_index;
	}
	interpolator = interpolator_from_collisions(start_col, end_col, segment_range.start, cam, segment_range.end - segment_range.start);
	interpolator.space_in_screen.start -= 2;
	interpolator.space_in_screen.end += 2;
	interpolator.step_count += 4;
	return (interpolator);
}
