/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_y_axis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:39:18 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/13 17:16:08 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include <math.h>
#include <stdio.h>

#include "../graphics/graphics.h"

static unsigned int	get_y_pixel_color(t_wall_slice_painter slice, int paint_offset, t_graphic_image *image)
{
	unsigned int	color;
	int				image_row;

	image_row = get_row_in_image(slice, paint_offset, image);
	if (slice.column_in_image < 0 || slice.column_in_image >= (int)image->res.x || image_row < 0 || image_row >= (int)image->res.y)
		color = 0xFF0000; 
	else
		color = image->addr[slice.column_in_image + image_row * image->line_length / 4];
	return (color);
}

void	paint_wall_slice(t_camera *cam, t_wall_slice_painter slice, t_graphic_image *texture)
{
	int 			paint_offset;
	unsigned int	color;

	paint_offset = slice.z_start_in_screen;
	while (paint_offset < slice.z_end_in_screen)
	{
		color = get_y_pixel_color(slice, paint_offset, texture);
		if (paint_offset < (int)cam->res_y && paint_offset > 0) 
			cam->draw_buffer[cam->current_render_x_pixel + paint_offset * cam->res_x] = color;
		paint_offset++;
	}
}
