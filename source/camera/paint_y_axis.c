/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_y_axis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:39:18 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 18:19:01 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <math.h>
#include <stdio.h>

void	paint_y_axis(t_camera *cam, t_collision col, size_t x_pixel)
{
	float	dist_to_col;
	int 	paint_offset;
	int		paint_height;

	dist_to_col = vector_dist(cam->pos, col.pos);
	paint_height = DEFAULT_WALL_REAL_HEIGHT / dist_to_col * cam->distances_to_plane[x_pixel];
	if (paint_height > (int)cam->res_y)
		paint_height = cam->res_y;
	paint_offset = -paint_height / 2; // Esto se debería leer del objeto
	while (paint_offset < paint_height / 2)
	{
		if (paint_offset + cam->res_y / 2 < cam->res_y) 
			cam->draw_buffer[x_pixel + (paint_offset + cam->res_y / 2) * cam->res_x] = 0x00FF00;
		paint_offset++;
	}
}
