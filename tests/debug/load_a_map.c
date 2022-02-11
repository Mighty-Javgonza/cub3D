/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/10 16:42:51 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <mlx.h>
#include "../../libft/libft.h"

t_graphic_environment	ge;
t_world	world;
char	*addr;
int		bpp;
int		line_length;
int		endian;

static int	reshape(void *ignored)
{
	(void)ignored;

	ft_memset(world.player.cam.draw_buffer, 0x0, world.player.cam.res_x * world.player.cam.res_y * 4);
	camera_render_image(&world.player.cam, &world);
	player_update_movement(&world.player);
	display_camera_view(&ge, &world.player.cam);
	return (0);
}

int main()
{
	t_map	map;
	ge = init_graphic_environment((t_pixpos){1920, 1080});

	map = init_map("maps/big_chungus");

	char	*texture_line;

	open_map(&map);
	get_next_line(map.fd, &texture_line);
	parse_texture(&map, &ge, texture_line);
	get_next_line(map.fd, &texture_line);
	parse_texture(&map, &ge, texture_line);
	get_next_line(map.fd, &texture_line);
	parse_texture(&map, &ge, texture_line);
	get_next_line(map.fd, &texture_line);
	parse_texture(&map, &ge, texture_line);

	world = init_world();

	parse_world_lines(&map);
	world_shaper(&world, &map);

	assign_parent_to_colliders(&world);

	t_graphic_image	**texture_pointers;
	texture_pointers = malloc(sizeof(*texture_pointers) * 4);
	texture_pointers[0] = &map.textures[0];
	texture_pointers[1] = &map.textures[1];
	texture_pointers[2] = &map.textures[2];
	texture_pointers[3] = &map.textures[3];

	assign_default_textures(&world, texture_pointers);

	t_global_environment	gb;

	gb.ge = &ge;
	gb.world = &world;
	hook_controls(&gb);
	hook_events(&gb);
	mlx_loop_hook(ge.mlx, reshape, NULL);
	mlx_loop(ge.mlx);
}
