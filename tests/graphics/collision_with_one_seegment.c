/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:43:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 18:22:31 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <mlx.h>

int	main()
{
	t_graphic_environment	ge;
	t_graphic_image			img;
	t_ray_collider			ray;
	t_segment				s;
	t_collision				col;

	ge = init_graphic_environment((t_pixpos){500, 500});
	img = new_graphic_image(&ge, (t_pixpos){500, 500});
	img.scale_factor = 40;

	ray = init_ray_collider();
	ray.origin = (t_vector){0.2, 2};
	ray.direction = (t_vector){0.99, 0.01};
	s = (t_segment){{3, 1}, {3, 4}};

	img.color = 0xff0000;
	paint_segment(&img, &s);
	paint_ray_collider(&img, &ray);
	col = collide_ray_segment(&ray, &s);
	t_rectangle	r;

	r.pos = col.pos;
	r.size.x = 0.1;
	r.size.y = 0.1;
	img.color = 0xff00ff;
	if (col.exists)
		paint_rect(&img, r);
	display_image(&ge, &img, (t_pixpos){0, 0});
	mlx_loop(ge.mlx);
}
