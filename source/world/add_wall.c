/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_wall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:43:02 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 18:22:34 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.h"
#include "../../libft/libft.h"

static void	copy_old_walls_and_add_new_one(t_world *world, t_wall new_wall)
{
		t_wall *old_walls;

		old_walls = world->walls;
		world->walls = malloc(sizeof(t_wall) * (world->wall_count + 1));
		if (!world->walls)
				exit(-1); // TODO Funcion de errores y mensaje
		ft_memmove(world->walls, old_walls, sizeof(t_wall) * world->wall_count);
		world->walls[world->wall_count] = new_wall;
		free(old_walls);
}

static void	add_new_wall(t_world *world, t_wall new_wall)
{
		world->walls = malloc(sizeof(t_wall) * (world->wall_count + 1));
		if (!world->walls)
				exit(-1); // TODO Funcion de errores y mensaje
		world->walls[world->wall_count] = new_wall;
}

void	add_wall(t_world *world, t_vector wall_pos)
{
	t_wall new_wall;
	
	new_wall = init_wall();
	new_wall.col.pos = wall_pos;
	if (world->walls)
		copy_old_walls_and_add_new_one(world, new_wall);
	else
		add_new_wall(world, new_wall);
	world->wall_count++;
}
