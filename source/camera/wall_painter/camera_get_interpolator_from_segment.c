/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_get_interpolator_from_segment.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:02:54 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 18:03:43 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall_painter.h"
#include <stdio.h>
#include "../camera.h"

static void	clamp_range_to_representator_bounds(t_view_representator *vr, t_camera_range *range)
{
	if (!pixel_in_representator_bounds(vr, range->end))
		range->end = vr->res.x - 1;
	if (!pixel_in_representator_bounds(vr, range->start))
		range->start = 0;
}

static t_camera_range	get_biggest_segment_range_that_guarantees_collisions(t_camera *cam, t_segment segment, t_collision_candidate *candidate)
{
	t_camera_range	segment_range;

	segment_range = get_segment_range(cam, segment, candidate->col->pos);
	segment_range.start += 1;
	segment_range.end -= 1;
	return (segment_range);
}

static t_collision	get_collision_with_target_from_segment_and_pixel(t_camera *cam, size_t pixel, t_segment *segment, t_collision_candidate *candidate, size_t segment_index)
{
	t_collision	col;

	col = collision_from_camera_pixel_with_segment(cam, pixel, segment);
	if (col.exists)
	{
		col.target = candidate->col;
		col.target_id = segment_index;
	}
	return (col);
}

static void	expand_interpolator(t_wall_slice_interpolator *interpolator)
{
	interpolator->space_in_screen.start -= 2;
	interpolator->space_in_screen.end += 2;
	interpolator->step_count += 4;
}

t_wall_slice_interpolator	camera_get_interpolator_from_segment(t_camera *cam, t_collision_candidate *candidate, size_t segment_index)
{
	t_wall_slice_interpolator	interpolator;
	t_camera_range				segment_range;
	t_collision					start_col;
	t_collision					end_col;
	t_segment					segment;
	t_segment					segment_in_world;

	segment = candidate->col->segments[segment_index];
	segment_in_world = add_segment_vector(segment, candidate->col->pos);
	segment_range = get_biggest_segment_range_that_guarantees_collisions(cam, segment, candidate);
	clamp_range_to_representator_bounds(&cam->representator, &segment_range);
	interpolator.can_be_painted = 0;
	start_col = get_collision_with_target_from_segment_and_pixel(cam, segment_range.start, &segment_in_world, candidate, segment_index);
	end_col = get_collision_with_target_from_segment_and_pixel(cam, segment_range.end, &segment_in_world, candidate, segment_index);
	interpolator = interpolator_from_collisions(start_col, end_col, segment_range.start, cam, segment_range.end - segment_range.start);
	if (interpolator.can_be_painted && !representator_check_area_has_unpainted_pixels(&cam->representator, interpolator.bound_box))
		interpolator.can_be_painted = 0;
	expand_interpolator(&interpolator);
	return (interpolator);
}
