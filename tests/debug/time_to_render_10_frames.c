/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:29:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/06 12:45:52 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include "../../libft/libft.h"
#include <stdio.h>
#include <sys/time.h>
#include <mlx.h>

static void	render_frame(t_graphic_environment *ge, t_world *w)
{
	ft_memset(w->player.cam.draw_buffer, 0x0, 1920 * 1080 * 4);
	camera_render_image(&w->player.cam, w);
	display_camera_view(ge, &w->player.cam);
}

static void	compute_and_display_time_difference(struct timeval before, struct timeval after)
{
	struct timeval	diff;

	diff.tv_sec = after.tv_sec - before.tv_sec;
	if (before.tv_usec <= after.tv_usec)
		diff.tv_usec = after.tv_usec - before.tv_usec;
	else
	{
		diff.tv_usec = after.tv_usec - before.tv_usec + 1000000;
		diff.tv_sec--;
	}
	printf("test_time: %lds %dus\n", diff.tv_sec, diff.tv_usec);
}

int	main()
{
	t_graphic_environment	ge;
	t_graphic_image			**images;
	t_world					w;

	ge = init_graphic_environment((t_pixpos){1920, 1080});

	w = init_world();
	w.player.cam.res_x = 1920;
	w.player.cam.res_y = 1080;
	restart_draw_buffer(&w.player.cam);

	add_wall(&w, (t_vector){5, 2});
	add_wall(&w, (t_vector){4, 3});
	add_wall(&w, (t_vector){3, 5});
	add_wall(&w, (t_vector){7, 8});
	images = malloc(sizeof(*images) * 4);
	create_default_textures(images, &ge);
	assign_default_textures(&w, images);
	assign_parent_to_colliders(&w);

	struct timeval	before;	
	struct timeval	after;	

	gettimeofday(&before, NULL);
	for (int i = 0; i < 10; i++)
		render_frame(&ge, &w);
	gettimeofday(&after, NULL);

	compute_and_display_time_difference(before, after);
}
