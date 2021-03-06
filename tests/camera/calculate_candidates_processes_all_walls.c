/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 13:27:20 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <mlx.h>
#include "../../libft/libft.h"

int main()
{
	t_world					w;
	t_camera				*cam;
	t_collision_candidate	*candidate;
	
	w = init_world();
	add_wall(&w, (t_vector){-3, 0});
	add_wall(&w, (t_vector){3, 0});
	assign_parent_to_colliders(&w);
	cam = &w.player.cam;
	cam->direction = (t_vector){1, 0};
	calculate_candidate_colliders(cam, &w);
	candidate = &cam->collision_candidates[1];
	if (candidate->is_in_screen != 1)
		return (-1);
	return (0);
}
