/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_y_axis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:39:18 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 18:31:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall_painter.h"
#include "../camera.h"
#include <math.h>
#include "../../graphics/graphics.h"

static unsigned int	get_y_pixel_color(t_wall_slice_painter slice, int paint_offset, t_graphic_image *image)
{
	unsigned int	color;
	int				image_row;

	image_row = get_row_in_image(slice, paint_offset) * image->res.y / slice.height_in_screen;
	color = image->addr[slice.column_in_image + image_row * image->line_length / 4];
	return (color);
}

void	paint_wall_slice(t_camera *cam, t_wall_slice_painter slice, t_graphic_image *texture)
{
	int				end;
	t_pixpos		pixel;
	int	start;

	pixel.x = cam->current_render_x_pixel;
	start = slice.z_start_in_screen;
	if (start < 0)
		start = 0;
	pixel.y = start;
	end = slice.z_end_in_screen;
	if (end >= (int)camera_get_res_y(cam))
		end = camera_get_res_y(cam) - 1;
	while ((int)pixel.y < end)
	{
		if (!representator_check_pixel_is_painted(&cam->representator, pixel))
		{
  			cam->representator.color = get_y_pixel_color(slice, pixel.y, texture);
  			representator_paint_pixel(&cam->representator, pixel);
		}
		pixel.y++ /*+= random() / 300000000*/;
	}
}
