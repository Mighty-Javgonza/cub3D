/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide_ray_bound_collider.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:43:40 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/03 16:22:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_collider.h"
#include <stdio.h>

t_collision	collide_ray_bound_collider(t_ray_collider *ray, t_bound_collider *bc)
{
	size_t	i;
	t_collision	closest_col;
	t_collision	current_col;
	float		closest_dist;
	t_segment	world_segment;

	closest_dist = ray->max_length + 1;
	closest_col.exists = 0;
	i = 0;
	while (i < bc->segment_count)
	{
		world_segment = get_bound_collider_segment_in_world(bc, i);
		current_col = collide_ray_segment(ray, &world_segment);
		if (current_col.exists)
		{
			if (closest_col.exists == 0 || current_col.dist < closest_dist)
			{
				closest_col = current_col;
				closest_dist = current_col.dist;
				closest_col.target_id = i;
				closest_col.target = bc;
			}
		}
		i++;
	}
	return (closest_col);
}
