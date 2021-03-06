/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 16:45:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <mlx.h>
#include "../../libft/libft.h"

t_graphic_environment	ge;
t_graphic_image			img;
t_world	world;
void	*mlx_img;
char	*addr;
int		bpp;
int		line_length;
int		endian;

static int	reshape(void *ignored)
{
	(void)ignored;

	world.walls[0].col.pos.y += 0.015;
	ft_memset(world.player.cam.representator.draw_buffer, 0x0, camera_get_res_x(&world.player.cam) * camera_get_res_y(&world.player.cam) * 4);
	camera_render_image(&world.player.cam, &world);
	display_camera_view(&ge, &world.player.cam);
	return (0);
}

int main()
{
	t_graphic_image	**images;

	ge = init_graphic_environment((t_pixpos){1920, 1080});
	mlx_img = mlx_new_image(ge.mlx, 1920, 1080);
	img = new_graphic_image(&ge, (t_pixpos){700, 700});
	img.scale_factor = 30;
	addr = mlx_get_data_addr(mlx_img, &bpp, &line_length,
								&endian);

	images = malloc(sizeof(*images) * 4);
	create_default_textures(images, &ge);
	world = init_world();
	add_wall(&world, (t_vector){3, 2});
	add_wall(&world, (t_vector){6, 1});
	add_wall(&world, (t_vector){3, 0});
	assign_parent_to_colliders(&world);
	assign_default_textures(&world, images);
	mlx_hook(ge.win, 2, 0, &player_movement, &world.player);
	mlx_loop_hook(ge.mlx, reshape, NULL);
	mlx_loop(ge.mlx);
}
