/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_candidate_colliders.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:11:53 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 20:16:15 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../world/world.h"

typedef struct	s_camera_range
{
	int	start;
	int	end;
}				t_camera_range;

static void	allocate_candidate_colliders(t_camera *cam, t_world *world)
{
	size_t	i;
	if (cam->collision_candidates != NULL)
		free(cam->collision_candidates);
	cam->collision_candidates = malloc(sizeof(*cam->collision_candidates) * world->wall_count);
	cam->collision_candidates_count = world->wall_count;
	if (cam->collision_candidates == NULL)
		exit(1); //TODO: mensajito error
	i = 0;
	while (i < world->wall_count)
	{
		cam->collision_candidates[i].col = &world->walls[i].col;
		i++;
	}
}

static void	determine_if_candidate_is_in_screen(t_camera *cam, t_collision_candidate *candidate)
{
	t_wall		*wall;
	float		projection;
	t_vector	wall_as_seen_from_camera;

	wall = candidate->col->parent_wall;
	wall_as_seen_from_camera = sub_vectors(wall->col.pos, cam->pos);
	projection = vector_dot(cam->direction, wall_as_seen_from_camera);
	if (projection > 0)
		candidate->is_in_screen = 1;
	else
		candidate->is_in_screen = 0;
}

static int	pixel_is_in_camera_bounds(t_camera *cam, int pixel)
{
	if (pixel < 0 || pixel > (int)cam->res_x)
		return (0);
	return (1);
}

static t_camera_range	get_segment_range(t_camera *cam, t_segment segment, t_vector pos)
{
	t_segment		segment_as_seen_from_camera;
	t_camera_range	range;
	int				start_pixel;
	int				end_pixel;

	segment_as_seen_from_camera = segment;
	segment_as_seen_from_camera = add_segment_vector(segment_as_seen_from_camera, pos);
	segment_as_seen_from_camera = sub_segment_vector_vfirst(segment_as_seen_from_camera, cam->pos);
	start_pixel = camera_point_to_camera_pixel(cam, segment_as_seen_from_camera.p1);
	end_pixel = camera_point_to_camera_pixel(cam, segment_as_seen_from_camera.p2);
	if (start_pixel > end_pixel)
	{
		range.start = end_pixel;
		range.end = start_pixel;
	}
	else
	{
		range.start = start_pixel;
		range.end = end_pixel;
	}
	return (range);
}

static int	range_is_in_camera_bounds(t_camera *cam, t_camera_range range)
{
	return (pixel_is_in_camera_bounds(cam, range.start) && pixel_is_in_camera_bounds(cam, range.end));
}

static void	calculate_candidate_bounds_in_screen(t_camera *cam, t_collision_candidate *candidate)
{
	size_t	i;
	t_camera_range	segment_range;
	t_camera_range	collider_range;
	
	collider_range.end = -1;
	collider_range.start = cam->res_x + 1;

	i = 0;
	while (i < candidate->col->segment_count)
	{
		segment_range = get_segment_range(cam, candidate->col->segments[i], candidate->col->pos);

		if (!pixel_is_in_camera_bounds(cam, segment_range.start) && pixel_is_in_camera_bounds(cam, segment_range.end))
			segment_range.start = 0;
		else if (pixel_is_in_camera_bounds(cam, segment_range.start) && !pixel_is_in_camera_bounds(cam, segment_range.end))
			segment_range.end = cam->res_x;
		if (range_is_in_camera_bounds(cam, segment_range))
		{
			if (segment_range.end > collider_range.end)
				collider_range.end = segment_range.end;
			if (segment_range.start < collider_range.start) 
				collider_range.start = segment_range.start;
		}
		i++;
	}
	if (!range_is_in_camera_bounds(cam, collider_range))
	{
		candidate->is_in_screen = 0;
	}
	else
	{
		candidate->start_pixel = collider_range.start;
		candidate->end_pixel = collider_range.end;
	}
}

void	calculate_candidate_colliders(t_camera *cam, t_world *world)
{
	size_t					i;
	size_t					candidates_in_screen = 0;
	t_collision_candidate	*candidate;

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
//	printf("candidates_in_screen: %zu\n", candidates_in_screen);
}
