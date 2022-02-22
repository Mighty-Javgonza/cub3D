/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_world.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:06:40 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 12:29:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.h"

void	destroy_world(t_world *world, t_graphic_environment *ge)
{
	destroy_walls(world);
	destroy_player(&world->player);
	destroy_graphic_image(world->wall_textures[0], ge->mlx);
	destroy_graphic_image(world->wall_textures[1], ge->mlx);
	destroy_graphic_image(world->wall_textures[2], ge->mlx);
	destroy_graphic_image(world->wall_textures[3], ge->mlx);
	free(world->wall_textures[0]);
	free(world->wall_textures[1]);
	free(world->wall_textures[2]);
	free(world->wall_textures[3]);
	free(world->wall_textures);
}
