/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_candidate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:06:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 15:23:02 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../textures/textures.h"
#include "../error/error.h"

static void	render_segments_farthest_to_closest(t_camera *cam, t_collision_candidate *candidate, float *distances)
{
	size_t	i;
	size_t	*ordered_indices;
	size_t	seg_count;

	seg_count = candidate->col->segment_count;
	ordered_indices = sort_float_array(distances, seg_count);
	i = seg_count;
	while (i > 0)
	{
		camera_render_candidate_segment(cam, candidate, ordered_indices[i - 1]);
		i--;
	}
	free(ordered_indices);
}

void	camera_render_candidate(t_camera *cam, size_t candidate_index)
{
	size_t					i;
	t_collision_candidate	*candidate;
	float					*dist_to_segments;
	size_t					segment_count;
	t_segment				segment_in_world;
	t_segment				*segments;

	candidate = &cam->collision_candidates[candidate_index];
	segments = candidate->col->segments;
	segment_count = candidate->col->segment_count;
	dist_to_segments = malloc(sizeof(*dist_to_segments) * segment_count);
	if (dist_to_segments == NULL)
		exit_and_message("Couldn't allocate distance to segments\n");
	i = 0;
	while (i < segment_count)
	{
		segment_in_world = add_segment_vector(segments[i], candidate->col->pos);
		dist_to_segments[i] = distance_to_closest_segment_end(segment_in_world, cam->pos);
		//TODO: Se puede evaluar sobre la proyección en la dirección para evitar calculos de sqrt
		i++;
	}
	render_segments_farthest_to_closest(cam, candidate, dist_to_segments);
	free(dist_to_segments);
}
