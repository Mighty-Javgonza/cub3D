/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 16:08:02 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <mlx.h>
#include "../../libft/libft.h"

t_graphic_environment	ge;
t_world			world;
char			*addr;
int				bpp;
int				line_length;
int				endian;
t_linear_door	door;

static int	reshape(void *ignored)
{
	(void)ignored;

	ft_memset(world.player.cam.representator.draw_buffer, 0x0, camera_get_res_x(&world.player.cam) * camera_get_res_y(&world.player.cam) * 4);
	camera_render_image(&world.player.cam, &world);
	display_camera_view(&ge, &world.player.cam);
	if (door.state == DOOR_STATE_CLOSED && vector_dist(world.player.cam.pos, door.wall->col.pos) < 2)
		start_opening_linear_door(&door);
	else if (door.state == DOOR_STATE_OPENED && vector_dist(world.player.cam.pos, door.wall->col.pos) > 4)
		start_closing_linear_door(&door);
	update_linear_door(&door);
	player_update_movement(&world.player);
	return (0);
}

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
	set_view_representator_resolution(&world.player.cam.representator, (t_resolution){1920, 1080});
	restart_draw_buffer(&world.player.cam);

	add_wall(&world, (t_vector){3, -1});
	add_wall(&world, (t_vector){3, 0});
	add_wall(&world, (t_vector){3, 1});
	door = init_linear_door();
	door.opening_direction = (t_vector){0, 1};
	door.wall = &world.walls[1];
	door.wall->width -= 0.2;
	calculate_wall_segments(door.wall);
	assign_parent_to_colliders(&world);
	assign_default_textures(&world, images);

	t_global_environment	gb;

	gb.ge = &ge;
	gb.world = &world;
	hook_controls(&gb);
	hook_events(&gb);
	mlx_loop_hook(ge.mlx, reshape, NULL);
	mlx_loop(ge.mlx);
}
