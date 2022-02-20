/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_pixel.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:49:12 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/19 19:29:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../world/world.h"

void	camera_render_pixel(t_camera *cam, t_world *world, size_t x_pixel)
{
	(void)world;
	t_collision				*collisions;
	t_wall_slice_painter	slice;
	size_t					i;

	cam->current_render_x_pixel = x_pixel;
	collisions = malloc(sizeof(*collisions) * cam->collision_candidates_count);
	i= 0;
	while (i < cam->collision_candidates_count)
	{
		collisions[i] = collision_from_camera_pixel_with_candidate(cam, i, x_pixel);
		i++;
	}
	float	*col_dists;

	col_dists = malloc(sizeof(*col_dists) * cam->collision_candidates_count);
	i = 0;
	while (i < cam->collision_candidates_count)
	{
		col_dists[i] = collisions[i].dist;
		i++;
	}

	size_t		*ordered_indices;
	t_collision	col;

	ordered_indices = sort_float_array(col_dists, cam->collision_candidates_count);
	i = cam->collision_candidates_count;
	if (i > 8)
		i = 8;
	while (i > 0)
	{
		col = collisions[ordered_indices[i - 1]];
		if (col.exists)
		{
			slice = calculate_paint_slice(cam, col);
			paint_wall_slice(cam, slice, ((t_bound_collider *)col.target)->parent_wall->texturizer.textures[col.target_id]);
		}
		i--;
	}
	free(collisions);
	free(col_dists);
	free(ordered_indices);
}
