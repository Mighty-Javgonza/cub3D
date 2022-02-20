/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_y_axis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:39:18 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/19 19:05:34 by javgonza         ###   ########.fr       */
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

	image_row = get_row_in_image(slice, paint_offset);
	if (slice.column_in_image < 0)
		slice.column_in_image = 0;
	if (slice.column_in_image >= (int)image->res.x)
		slice.column_in_image = image->res.x - 1;
	if (image_row < 0)
		image_row = 0;
	if (image_row >= (int)image->res.y)
		image_row = image->res.y - 1;
	color = image->addr[slice.column_in_image + image_row * image->line_length / 4];
	return (color);
}

void	paint_wall_slice(t_camera *cam, t_wall_slice_painter slice, t_graphic_image *texture)
{
	int 			paint_offset;
	unsigned int	color;
	int				end;

	paint_offset = slice.z_start_in_screen;
	if (slice.z_start_in_screen < 0)
		paint_offset = 0;
	end = slice.z_end_in_screen;
	if (end > (int)cam->res_y)
		end = cam->res_y;
	while (paint_offset < end)
	{
		color = get_y_pixel_color(slice, paint_offset, texture);
		if (paint_offset < (int)cam->res_y && paint_offset > 0) 
		{
			if (cam->current_render_x_pixel > 0 && cam->current_render_x_pixel < cam->res_x)
				cam->draw_buffer[cam->current_render_x_pixel + paint_offset * cam->res_x] = color;
			else
				break ;
		}
		paint_offset++;
	}
}
