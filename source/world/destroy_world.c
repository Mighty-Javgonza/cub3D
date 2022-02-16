/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_world.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:06:40 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 13:34:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.h"
#include "../parsing/parsing.h"
#include <stdio.h>

static void	destroy_textures(t_world *world)
{
	free(world->wall_textures[SOUTH_TEXTURE]);
	free(world->wall_textures[NORTH_TEXTURE]);
	free(world->wall_textures[EAST_TEXTURE]);
	free(world->wall_textures[WEST_TEXTURE]);
	free(world->wall_textures);
}

void	destroy_world(t_world *world)
{
	destroy_textures(world);
	destroy_walls(world);
	destroy_player(&world->player);
}
