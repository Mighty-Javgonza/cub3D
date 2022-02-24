/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   candidate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:25:26 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 12:27:53 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

void	determine_if_candidate_is_in_screen(t_camera *cam,
			t_collision_candidate *candidate)
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
