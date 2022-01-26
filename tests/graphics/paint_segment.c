/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:43:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 12:21:58 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <mlx.h>

int	main()
{
	t_graphic_environment	ge;
	t_graphic_image			img;
	t_segment				s;

	s = (t_segment){{10, 20}, {100, 300}};
	ge = init_graphic_environment((t_pixpos){300, 300});
	img = new_graphic_image(&ge, (t_pixpos){300, 300});
	paint_segment(&img, &s);
	display_image(&ge, &img, (t_pixpos){0, 0});
	mlx_loop(ge.mlx);
}
