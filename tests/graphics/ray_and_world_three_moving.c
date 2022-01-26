/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:43:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 18:07:45 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <mlx.h>

t_graphic_environment	ge;
t_graphic_image			img;
t_world					w;
t_ray_collider			ray;
t_collision				col;

static int	move_and_paint(void *ignored)
{
	(void)ignored;
	img.color = 0x000000;
	clear_image(&img);
	paint_world(&img, &w);
	w.walls[2].col.pos.x += 0.07;
	w.walls[1].col.pos.x -= 0.025;
	w.walls[0].col.pos.x += 0.04;
	ray = camera_pixel_to_ray(&w.player.cam, 1920 / 2 - 30);
	col = collide_ray_world(&ray, &w);
	paint_ray_collider(&img, &ray);


	t_rectangle	r;

	r.pos = col.pos;
	r.size.x = 0.2;
	r.size.y = 0.2;
	r.pos.x -= 0.1;
	r.pos.y -= 0.1;
	img.color = 0xFF0000;
	if (col.exists)
		paint_rect(&img, r);
	display_image(&ge, &img, (t_pixpos){0, 0});
	usleep(10000);
	return (0);
}

int	main()
{
	w = init_world();
	ge = init_graphic_environment((t_pixpos){700, 700});
	img = new_graphic_image(&ge, (t_pixpos){700, 700});
	img.scale_factor = 40;
	w.player.cam.pos = (t_vector){0, 10};
	add_wall(&w, (t_vector){4, 5});
	add_wall(&w, (t_vector){11, 7});
	add_wall(&w, (t_vector){2, 8});
	mlx_loop_hook(ge.mlx, move_and_paint, NULL);
	mlx_loop(ge.mlx);
}
