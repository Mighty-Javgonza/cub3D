/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/13 16:40:09 by javgonza         ###   ########.fr       */
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
	images[0] = new_image_from_png(&ge, "assets/walls/robrodri.png");
	images[1] = new_image_from_png(&ge, "assets/walls/javgonza.png");
	images[2] = new_image_from_png(&ge, "assets/walls/tomartin.png");
	images[3] = new_image_from_png(&ge, "assets/walls/fgata-va.png");

	world = init_world();

	add_wall(&world, (t_vector){3, 1.2});
	world.player.cam.pos.y = 0.01;
	assign_parent_to_colliders(&world);
	assign_default_textures(&world, images);
	calculate_candidate_colliders(&world.player.cam, &world);
	camera_render_all_candidates(&world.player.cam);
//	camera_render_candidate(&world.player.cam, 0);
	display_camera_view(&ge, &world.player.cam);

//	t_global_environment	gb;

//	gb.ge = &ge;
//	gb.world = &world;
//	hook_controls(&gb);
//	hook_events(&gb);
	mlx_loop(ge.mlx);
}
