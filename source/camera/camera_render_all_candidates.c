/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_all_candidates.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:40:21 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 12:21:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>

static void	render_candidates_closest_to_farthest(t_camera *camera,
			float *dists_to_candidates, size_t candidate_count)
{
	size_t	*ordered_indices;
	size_t	i;

	ordered_indices = sort_float_array(dists_to_candidates, candidate_count);
	i = 0;
	while (i < candidate_count && dists_to_candidates[ordered_indices[i]]
		< DEFAULT_RAY_COLLIDER_LENGTH)
	{
		camera_render_candidate(camera, ordered_indices[i]);
		i++;
	}
	free(ordered_indices);
}

void	camera_render_all_candidates(t_camera *camera)
{
	size_t					i;
	float					*dists_to_candidates;
	t_collision_candidate	*candidates;
	size_t					candidate_count;

	candidates = camera->collision_candidates;
	candidate_count = camera->collision_candidates_count;
	dists_to_candidates = malloc(sizeof(*dists_to_candidates)
			* candidate_count);
	i = 0;
	while (i < candidate_count)
	{
		dists_to_candidates[i] = vector_dist(camera->pos,
				candidates[i].col->pos);
		i++;
	}
	render_candidates_closest_to_farthest(camera,
		dists_to_candidates, candidate_count);
	free(dists_to_candidates);
}
