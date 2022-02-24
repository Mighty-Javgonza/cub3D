/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide_ray_candidates.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:48:11 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:36:18 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_collider.h"
#include "../camera/camera.h"

t_collision	collide_ray_candidates(t_ray_collider *rc,
			t_collision_candidate *candidates, size_t candidate_count)
{
	size_t		i;
	t_collision	closest_col;
	t_collision	current_col;

	closest_col.exists = 0;
	i = 0;
	while (i < candidate_count)
	{
		if (candidates[i].is_in_screen && candidates[i].is_in_pixel)
		{
			current_col = calculate_ray_collider_wall_collision(rc,
					candidates[i].col->parent_wall);
			if (current_col.exists)
				if (!closest_col.exists || current_col.dist < closest_col.dist)
					closest_col = current_col;
		}
		i++;
	}
	return (closest_col);
}
