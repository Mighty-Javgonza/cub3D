/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_y_axis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:39:18 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 10:50:40 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include <math.h>
#include <stdio.h>

#include "../graphics/graphics.h"

static void 	calculate_paint_height(t_wall_slice_painter *slice, t_camera *cam, t_collision col)
{
	float					width_proportion;
	float					wall_height;

	wall_height = ((t_bound_collider *)col.target)->z_axis_height;
	width_proportion = cam->plane_width * cam->plane_distance;
	slice->height_in_world = wall_height * width_proportion / col.dist * slice->dist_to_slice;
	if (slice->height_in_world > (int)cam->res_y)
		slice->height_in_screen = cam->res_y;
	else
		slice->height_in_screen = slice->height_in_world;
}

static unsigned int	get_y_pixel_color(t_collision col, t_wall_slice_painter slice, int paint_offset, int image_column)
{
	unsigned int	color;
	t_wall			*parent_wall;
	t_graphic_image	*wall_image;
	int				image_row;

	parent_wall = ((t_bound_collider *)col.target)->parent_wall;
	wall_image = parent_wall->texturizer.textures[col.target_id];
	image_row = get_row_in_image(slice, paint_offset, wall_image);
	color = wall_image->addr[image_column + image_row * wall_image->line_length / 4];
	return (color);
}

void	paint_y_axis(t_camera *cam, t_collision col)
{
	int 					paint_offset;
	t_wall_slice_painter	slice;
	unsigned int			color;
	int						image_column;

	image_column = get_column_in_image(col, ((t_bound_collider *)col.target)->parent_wall->texturizer.textures[col.target_id]);
	slice.dist_to_slice = vector_dist(col.pos, cam->pos)/*col.dist*/ / cam->distances_to_plane[cam->current_render_x_pixel];
	calculate_paint_height(&slice, cam, col);
	calculate_slice_z_offset(&slice, cam, col);
	paint_offset = slice.z_start_in_screen;
	while (paint_offset < slice.z_end_in_screen)
	{
		color = get_y_pixel_color(col, slice, paint_offset, image_column);
		if (paint_offset < (int)cam->res_y && paint_offset > 0) 
		{
			cam->draw_buffer[cam->current_render_x_pixel + paint_offset * cam->res_x] = color;
		}
		paint_offset++;
	}
}
