/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide_ray_bound_collider.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:43:40 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 12:41:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_collider.h"
#include <stdio.h>

static t_collision	load_segment_and_get_collision(t_bound_collider *bc,
			size_t index, t_ray_collider *ray)
{
	t_segment		world_segment;
	t_collision		col;

	world_segment = get_bound_collider_segment_in_world(bc, index);
	col = collide_ray_segment(ray, &world_segment);
	return (col);
}

static void	update_closest_col(t_collision *closest_col, size_t i,
			t_collision current_col, t_bound_collider *bc)
{
	if (current_col.exists)
	{
		if (closest_col->exists == 0 || current_col.dist < closest_col->dist)
		{
			*closest_col = current_col;
			closest_col->dist = current_col.dist;
			closest_col->target_id = i;
			closest_col->target = bc;
		}
	}
}

t_collision	collide_ray_bound_collider(t_ray_collider *ray,
			t_bound_collider *bc)
{
	size_t			i;
	t_collision		closest_col;
	t_collision		current_col;

	closest_col.dist = ray->max_length + 1;
	closest_col.exists = 0;
	i = 0;
	while (i < bc->segment_count)
	{
		current_col = load_segment_and_get_collision(bc, i, ray);
		update_closest_col(&closest_col, i, current_col, bc);
		i++;
	}
	return (closest_col);
}
