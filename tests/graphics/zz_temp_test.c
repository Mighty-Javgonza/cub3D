/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:43:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 16:47:51 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <mlx.h>

t_graphic_environment	ge;
t_world					w;
t_minimap				mini;

static int	reshape(void *ignored)
{
	(void)ignored;
	paint_minimap(&mini);
	minimap_display(&mini);
	player_update_movement(&w.player);
	return (0);
}

int	main()
{

	ge = init_graphic_environment((t_pixpos){700, 700});

	w = init_world();
	add_wall(&w, (t_vector){3, 3});
	add_wall(&w, (t_vector){3, 4});
	add_wall(&w, (t_vector){3, 5});
	add_wall(&w, (t_vector){5, 4});
	add_wall(&w, (t_vector){2, 2});
	add_wall(&w, (t_vector){8, 5});
	add_wall(&w, (t_vector){7, 3});
	w.player.cam.pos = (t_vector){2, 3};
	w.player.rotation_speed = 0.1;
	mini = init_minimap(&ge, &w);
	mini.img.scale_factor = 30;

	t_global_environment	gb;

	gb.world = &w;
	gb.ge = &ge;
	hook_controls(&gb);
	mlx_loop_hook(ge.mlx, &reshape, NULL);
	mlx_loop(ge.mlx);
}
