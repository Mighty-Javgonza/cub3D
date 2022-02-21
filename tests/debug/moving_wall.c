/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 16:04:43 by javgonza         ###   ########.fr       */
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
	ft_memmove(addr, world.player.cam.representator.draw_buffer, 4 * camera_get_res_x(&world.player.cam) * camera_get_res_y(&world.player.cam) - 1);
	mlx_put_image_to_window(ge.mlx, ge.win, mlx_img, 0, 0);
	img.color = 0xa0000000;
	clear_image(&img);
	paint_world(&img, &world);
	display_image(&ge, &img, (t_pixpos){0, 0});
	return (0);
}

int main()
{

	ge = init_graphic_environment((t_pixpos){1920, 1080});
	mlx_img = mlx_new_image(ge.mlx, 1920, 1080);
	img = new_graphic_image(&ge, (t_pixpos){700, 700});
	img.scale_factor = 30;
	addr = mlx_get_data_addr(mlx_img, &bpp, &line_length,
								&endian);


	world = init_world();
	add_wall(&world, (t_vector){3, 2});
	add_wall(&world, (t_vector){6, 1});
	add_wall(&world, (t_vector){3, 0});
//	add_wall(&world, (t_vector){3, -2});
//	add_wall(&world, (t_vector){6, 4});
	mlx_hook(ge.win, 2, 0, &player_movement, &world.player);
	mlx_loop_hook(ge.mlx, reshape, NULL);
	mlx_loop(ge.mlx);
}
