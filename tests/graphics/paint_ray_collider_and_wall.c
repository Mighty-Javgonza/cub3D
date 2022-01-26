/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:43:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 12:43:34 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <mlx.h>

int	main()
{
	t_graphic_environment	ge;
	t_graphic_image			img;
	t_wall					w;
	t_ray_collider			rc;

	rc = init_ray_collider();
	rc.origin = (t_vector) {100, 200};
	rc.direction = (t_vector) {0, -1};
	ge = init_graphic_environment((t_pixpos){300, 300});
	img = new_graphic_image(&ge, (t_pixpos){300, 300});
	w = init_wall();
	w.col.pos = (t_vector){100, 100};
	w.width = 50;
	w.height = 50;
	calculate_wall_segments(&w);
	paint_bound_collider(&img, &w.col);
	paint_ray_collider(&img, &rc);
	display_image(&ge, &img, (t_pixpos){0, 0});
	mlx_loop(ge.mlx);
}
