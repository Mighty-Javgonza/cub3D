/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_candidate_colliders.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:11:53 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 12:30:30 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../world/world.h"
#include "../error/error.h"

static int	range_is_in_camera_bounds(t_camera *cam, t_camera_range range)
{
	return (pixel_is_in_camera_bounds(cam, range.start)
		&& pixel_is_in_camera_bounds(cam, range.end));
}

static void	calculate_range(t_camera *cam, t_collision_candidate *candidate,
		t_camera_range *collider_range, int i)
{
	t_camera_range	segment_range;

	segment_range = get_segment_range(cam,
			candidate->col->segments[i], candidate->col->pos);
	if (!pixel_is_in_camera_bounds(cam, segment_range.start)
		&& pixel_is_in_camera_bounds(cam, segment_range.end))
		segment_range.start = 0;
	else if (pixel_is_in_camera_bounds(cam, segment_range.start)
		&& !pixel_is_in_camera_bounds(cam, segment_range.end))
		segment_range.end = camera_get_res_x(cam);
	if (range_is_in_camera_bounds(cam, segment_range))
	{
		if (segment_range.end > collider_range->end)
			collider_range->end = segment_range.end;
		if (segment_range.start < collider_range->start)
			collider_range->start = segment_range.start;
	}
}

static void	calculate_candidate_bounds_in_screen(t_camera *cam,
		t_collision_candidate *candidate)
{
	size_t			i;
	t_camera_range	collider_range;

	i = 0;
	collider_range.end = i - 1;
	collider_range.start = camera_get_res_x(cam) + 1;
	while (i < candidate->col->segment_count)
	{
		calculate_range(cam, candidate, &collider_range, i);
		i++;
	}
	if (!range_is_in_camera_bounds(cam, collider_range))
		candidate->is_in_screen = 0;
	else
	{
		candidate->start_pixel = collider_range.start;
		candidate->end_pixel = collider_range.end;
	}
}

void	calculate_candidate_colliders(t_camera *cam, t_world *world)
{
	size_t					i;
	size_t					candidates_in_screen;
	t_collision_candidate	*candidate;

	candidates_in_screen = 0;
	allocate_candidate_colliders(cam, world);
	i = 0;
	while (i < cam->collision_candidates_count)
	{
		candidate = &cam->collision_candidates[i];
		determine_if_candidate_is_in_screen(cam, candidate);
		if (cam->collision_candidates[i].is_in_screen)
		{
			calculate_candidate_bounds_in_screen(cam, candidate);
			candidates_in_screen++;
		}
		i++;
	}
}
