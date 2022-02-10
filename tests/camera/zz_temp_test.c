/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 18:52:17 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <mlx.h>
#include "../../libft/libft.h"

int main()
{
	t_world					w;
	t_camera				*cam;
	t_collision_candidate	*candidate;
	
	w = init_world();
	add_wall(&w, (t_vector){0, 0});
	add_wall(&w, (t_vector){1, 0});
	add_wall(&w, (t_vector){2, 0});
	add_wall(&w, (t_vector){3, 0});
	assign_parent_to_colliders(&w);
	cam = &w.player.cam;
	cam->direction = (t_vector){0, -1};
	cam->pos = (t_vector){2, 5};
	calculate_candidate_colliders(cam, &w);
	candidate = &cam->collision_candidates[0];
printf("%zu %zu\n", candidate->start_pixel, candidate->end_pixel);
	candidate = &cam->collision_candidates[1];
printf("%zu %zu\n", candidate->start_pixel, candidate->end_pixel);
	candidate = &cam->collision_candidates[2];
printf("%zu %zu\n", candidate->start_pixel, candidate->end_pixel);
	candidate = &cam->collision_candidates[3];
printf("%zu %zu\n", candidate->start_pixel, candidate->end_pixel);
	if (candidate->is_in_screen != 1)
		return (-1);
	return (0);
}
