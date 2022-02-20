/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/16 17:59:51 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <mlx.h>
#include "../../libft/libft.h"

t_graphic_environment	ge;
t_world	world;

int main()
{
	t_graphic_image	**images;

	ge = init_graphic_environment((t_pixpos){1920, 1080});

	images = malloc(sizeof(*images) * 4);
	images[NORTH_TEXTURE] = new_image_from_png(&ge, "assets/walls/debug_walls/north.png");
	images[SOUTH_TEXTURE] = new_image_from_png(&ge, "assets/walls/debug_walls/south.png");
	images[EAST_TEXTURE] = new_image_from_png(&ge, "assets/walls/debug_walls/east.png");
	images[WEST_TEXTURE] = new_image_from_png(&ge, "assets/walls/debug_walls/west.png");

	world = init_world();

	add_wall(&world, (t_vector){-3, 1.5});
//	add_wall(&world, (t_vector){-4, 1.5});
//	add_wall(&world, (t_vector){-5, 1.5});
//	add_wall(&world, (t_vector){-6, 1.5});
//	add_wall(&world, (t_vector){-7, 1.5});
//	add_wall(&world, (t_vector){-8, 1.5});
//	add_wall(&world, (t_vector){-7, -1.5});
//	add_wall(&world, (t_vector){-6, -1.5});
//	add_wall(&world, (t_vector){-5, -1.5});
//	add_wall(&world, (t_vector){-4, -1.5});
//	add_wall(&world, (t_vector){-9.5, 1});
//	world.walls[1].col.z_axis_height = 1.3;
	world.player.cam.direction = (t_vector){-1, 0};
	world.player.cam.pos = (t_vector){0.05, 0};
	assign_parent_to_colliders(&world);
	assign_default_textures(&world, images);
//	calculate_candidate_colliders(&world.player.cam, &world);
//	camera_render_all_candidates(&world.player.cam);
	camera_render_image(&world.player.cam, &world);
	display_camera_view(&ge, &world.player.cam);

	mlx_loop(ge.mlx);
}
