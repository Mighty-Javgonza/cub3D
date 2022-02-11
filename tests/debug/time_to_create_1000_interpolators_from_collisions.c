/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_to_interpolate_100_slices.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:54:15 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/11 12:45:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <sys/time.h>

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
	t_world						w;
	t_camera					*c;
	t_wall_slice_interpolator	interpolator;
	t_collision					start;
	t_collision					end;
	t_graphic_image				**images;
	t_graphic_environment		ge;

	ge = init_graphic_environment((t_pixpos){100, 100});
	w = init_world();
	add_wall(&w, (t_vector){3, 0});
	c = &w.player.cam;
	images = malloc(sizeof(*images) * 4);
	assign_parent_to_colliders(&w);
	create_default_textures(images, &ge);
	assign_default_textures(&w, images);
	calculate_candidate_colliders(c, &w);

	struct timeval	before;	
	struct timeval	after;	

	gettimeofday(&before, NULL);
	for (int i = 0; i < 1000; i++)
	{
		start = collision_from_camera_pixel(c, &w, i);
		end = collision_from_camera_pixel(c, &w, i + 30);
		interpolator = interpolator_from_collisions(start, end, i, c, 30);
	}
	gettimeofday(&after, NULL);
	compute_and_display_time_difference(before, after);
}
