/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 18:46:55 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <mlx.h>
#include "../../libft/libft.h"

int main()
{
	void	*mlx;
	void	*mlx_win;
	void	*mlx_img;
	char	*addr;
	int		bpp;
	int		line_length;
	int		endian;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	mlx_img = mlx_new_image(mlx, 1920, 1080);
	


	t_world	world;

	world = init_world();
	add_wall(&world, (t_vector){10, 0});
	camera_render_image(&world.player.cam, &world);
	addr = mlx_get_data_addr(mlx_img, &bpp, &line_length,
								&endian);
	ft_memmove(addr, world.player.cam.draw_buffer, 4 * world.player.cam.res_x * (world.player.cam.res_y - 1));
	mlx_put_image_to_window(mlx, mlx_win, mlx_img, 0, 0);
	mlx_loop(mlx);
}
