/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_paint_slice.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:07:52 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/13 13:11:48 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../textures/textures.h"

t_wall_slice_painter	calculate_paint_slice(t_camera *cam, t_collision col)
{
	t_wall_slice_painter	slice;
	t_graphic_image			*texture;

	texture = get_texture_from_collision(col);
	slice.column_in_image = get_column_in_image(col, texture);
	slice.dist_to_slice = vector_dist(col.pos, cam->pos) / cam->distances_to_plane[cam->current_render_x_pixel];
	calculate_slice_z_offset(&slice, cam, col);
	return (slice);
}
