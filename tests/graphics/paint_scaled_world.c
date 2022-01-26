/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:43:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 13:02:40 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <mlx.h>

int	main()
{
	t_graphic_environment	ge;
	t_graphic_image			img;
	t_world					w;

	w = init_world();
	ge = init_graphic_environment((t_pixpos){500, 500});
	img = new_graphic_image(&ge, (t_pixpos){500, 500});
	img.scale_factor = 40;
	add_wall(&w, (t_vector){10, 10});
	paint_world(&img, &w);
	display_image(&ge, &img, (t_pixpos){0, 0});
	mlx_loop(ge.mlx);
}
