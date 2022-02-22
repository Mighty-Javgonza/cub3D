/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:30:32 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 12:54:01 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "source/all_headers.h"
#include <stdlib.h>
#include <mlx.h>
#include <stdio.h>

static int	update(t_global_environment *gb)
{
	clear_camera_buffer(&gb->world->player.cam, gb->world);
	camera_render_image(&gb->world->player.cam, gb->world);
	player_update_movement(&gb->world->player);
	display_camera_view(gb->ge, &gb->world->player.cam);
	return (0);
}

static void	init_basic_parameters(t_world *world, t_graphic_environment *ge, char *map_name)
{
	t_map			map;

	*world = init_world();
	*ge = init_graphic_environment((t_pixpos){1920, 1080});
	map = init_map(map_name);
	parse_map(&map, ge);
	system("leaks -q cub3D");
	world_shaper(world, &map);
	destroy_map(&map);
	assign_parent_to_colliders(world);
	assign_default_textures(world, world->wall_textures);
}

void	show_leaks()
{
	system("leaks -q cub3D");
}

int main(int argc, char **argv)
{
	t_graphic_environment	ge;
	t_world					world;
	t_global_environment	gb;

	atexit(show_leaks);
	if (argc != 2)
		exit_and_message("Insert a map pls or delete maps, one at a time\n");
	init_basic_parameters(&world, &ge, argv[1]);
	gb.ge = &ge;
	gb.world = &world;
	hook_controls(&gb);
	hook_events(&gb);
	mlx_loop_hook(ge.mlx, update, &gb);
	mlx_loop(ge.mlx);
	return (0);
}
