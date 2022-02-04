/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_y_axis.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:39:18 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/04 18:08:45 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include <math.h>
#include <stdio.h>

#include "../graphics/graphics.h"

struct s_paint_height
{
	int	de_facto;
	int	de_jure;
};

static struct s_paint_height 	get_paint_height(t_camera *cam, t_collision col)
{
	struct s_paint_height	paint_height;

	paint_height.de_jure = DEFAULT_WALL_REAL_HEIGHT / col.dist * cam->distances_to_plane[cam->current_render_x_pixel];
	if (paint_height.de_jure > (int)cam->res_y)
		paint_height.de_facto = cam->res_y;
	else
		paint_height.de_facto = paint_height.de_jure;
	return (paint_height);
}

static int	get_column_in_image(t_collision col, t_graphic_image *image)
{
	t_segment	collided_segment;
	t_vector	collision_point_in_segment;
	float		percent_segment;
	int	image_column;

	collided_segment = ((t_bound_collider *)col.target)->segments[col.target_id];
	collided_segment = add_segment_vector(collided_segment, ((t_bound_collider *)col.target)->pos);
	collision_point_in_segment = col.pos;
	percent_segment = percent_in_segment(collided_segment, collision_point_in_segment);
	image_column = image->res.x * (percent_segment / 100.0f);
	return (image_column);
}

static int	get_image_row_in_image(struct s_paint_height paint_height, int paint_offset, t_graphic_image *image)
{
	int image_row;
	int de_jure_paint_offset;

	de_jure_paint_offset = paint_offset + (paint_height.de_jure - paint_height.de_facto) / 2;
	image_row = (paint_offset + (paint_height.de_jure / 2)) * image->res.y / paint_height.de_jure;
	return (image_row);
}

static unsigned int	get_y_pixel_color(t_collision col, struct s_paint_height paint_height, int paint_offset)
{
	unsigned int	color;
	t_wall			*parent_wall;
	t_graphic_image	*wall_image;
	int				image_column;
	int				image_row;

	parent_wall = ((t_bound_collider *)col.target)->parent_wall;		
	wall_image = parent_wall->texturizer.textures[col.target_id];
	image_column = get_column_in_image(col, wall_image);
	image_row = get_image_row_in_image(paint_height, paint_offset, wall_image);
	color = wall_image->addr[image_column + image_row * wall_image->line_length / 4];
	return (color);
}

void	paint_y_axis(t_camera *cam, t_collision col)
{
	int 					paint_offset;
	struct s_paint_height	paint_height;
	unsigned int			color;

	paint_height = get_paint_height(cam, col);
	paint_offset = -paint_height.de_facto / 2;
	while (paint_offset < paint_height.de_facto / 2)
	{
		color = get_y_pixel_color(col, paint_height, paint_offset);
		if (paint_offset + cam->res_y / 2 < cam->res_y) 
			cam->draw_buffer[cam->current_render_x_pixel + (paint_offset + cam->res_y / 2) * cam->res_x] = color;
		paint_offset++;
	}
}
