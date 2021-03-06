/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide_ray_world.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:53:21 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:36:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_collider.h"
#include <stdio.h>
#include "../world/world.h"

t_collision	collide_ray_world(t_ray_collider *rc, t_world *world)
{
	size_t		i;
	t_collision	closest_col;
	t_collision	current_col;

	closest_col.exists = 0;
	i = 0;
	while (i < world->wall_count)
	{
		current_col = calculate_ray_collider_wall_collision(rc,
				&world->walls[i]);
		if (current_col.exists)
			if (!closest_col.exists || current_col.dist < closest_col.dist)
				closest_col = current_col;
		i++;
	}
	return (closest_col);
}
