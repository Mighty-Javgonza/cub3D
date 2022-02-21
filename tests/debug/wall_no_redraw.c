/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 17:42:53 by javgonza         ###   ########.fr       */
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
	debug_minimap = init_minimap(&ge, &world);
	debug_minimap.img.scale_factor = 30;

	add_wall(&world, (t_vector){6, 3});
	paint_bound_collider(&debug_minimap.img, &world.walls[0].col);
	world.player.cam.direction = vector_normalize((t_vector){0.8, 0.2});
	world.player.cam.pos = (t_vector){3, 3};
	assign_parent_to_colliders(&world);
	assign_default_textures(&world, images);
	camera_render_image(&world.player.cam, &world);
	display_camera_view(&ge, &world.player.cam);
	minimap_display(&debug_minimap);

	mlx_loop(ge.mlx);
}
