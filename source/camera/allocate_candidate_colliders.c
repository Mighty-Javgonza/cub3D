/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_candidate_colliders.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:25:14 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 12:28:22 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include "../error/error.h"
#include "../world/world.h"

void	allocate_candidate_colliders(t_camera *cam, t_world *world)
{
	size_t	i;

	if (cam->collision_candidates != NULL)
		free(cam->collision_candidates);
	cam->collision_candidates = malloc(sizeof(*cam->collision_candidates)
			* world->wall_count);
	cam->collision_candidates_count = world->wall_count;
	if (cam->collision_candidates == NULL)
		exit_and_message("Couldn't allocate candidates\n");
	i = 0;
	while (i < world->wall_count)
	{
		cam->collision_candidates[i].col = &world->walls[i].col;
		i++;
	}
}
