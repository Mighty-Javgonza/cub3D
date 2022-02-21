/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 15:54:10 by javgonza         ###   ########.fr       */
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

	world.walls[0].col.pos.y += 0.015;
	clear_camera_buffer(&world.player.cam, &world);
	camera_render_image(&world.player.cam, &world);
	player_update_movement(&world.player);
	display_camera_view(&ge, &world.player.cam);
	return (0);
}

int main()
{
	t_graphic_image	**images;

	ge = init_graphic_environment((t_pixpos){1920, 1080});

	images = malloc(sizeof(*images) * 4);
	images[0] = new_image_from_png(&ge, "assets/walls/chadgonza.png");
	images[1] = new_image_from_png(&ge, "assets/walls/Robgonza.png");
	images[2] = new_image_from_png(&ge, "assets/walls/sigmartin.png");
	images[3] = new_image_from_png(&ge, "assets/walls/sigrodri.png");

	world = init_world();
	world.player.cam.representator.res.x = 1920;
	world.player.cam.representator.res.y = 1080;
//	world.player.cam.z_axis_pos += 0.00005;
	world.player.cam.z_axis_pos = 0.5;
	restart_draw_buffer(&world.player.cam);

	add_wall(&world, (t_vector){3, 2});
	add_wall(&world, (t_vector){6, 1});
	add_wall(&world, (t_vector){3, 0});
	add_wall(&world, (t_vector){5, 0});
	add_wall(&world, (t_vector){6, 0});
	add_wall(&world, (t_vector){7, 0});
	add_wall(&world, (t_vector){8, 0});
	assign_parent_to_colliders(&world);
	assign_default_textures(&world, images);
	world.walls[3].col.z_axis_height = 0.8;
	world.walls[4].col.z_axis_height = 0.6;
	world.walls[5].col.z_axis_height = 0.4;
	world.walls[6].col.z_axis_height = 0.2;

	t_global_environment	gb;

	gb.ge = &ge;
	gb.world = &world;
	hook_controls(&gb);
	hook_events(&gb);
	mlx_loop_hook(ge.mlx, reshape, NULL);
	mlx_loop(ge.mlx);
}
