/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 20:09:17 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
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
	display_camera_view(&ge, &world.player.cam);
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
	world.player.cam.res_x = 1920;
	world.player.cam.res_y = 1080;
	restart_draw_buffer(&world.player.cam);

	add_wall(&world, (t_vector){3, 0});
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
