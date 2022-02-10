/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_pixel_group.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:14:45 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 20:32:14 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../graphics/graphics.h"
#include "../textures/textures.h"

static void	render_wall_collision(t_camera *cam, t_wall_slice_painter slice, t_collision col)
{
	t_graphic_image			*texture;

	texture = get_texture_from_collision(col);
	paint_wall_slice(cam, slice, texture);
}

static int		collisions_hit_same_target(t_collision col1, t_collision col2)
{
	return (col1.exists && col2.exists && col1.target == col2.target && col1.target_id == col2.target_id);
}

static void	paint_interpolated_slices(t_camera *cam, t_wall_slice_interpolator interpolator, t_graphic_image *texture)
{
	size_t					i;
	t_wall_slice_painter	slice;

	i = 1;
	while (i < interpolator.step_count)
	{
		cam->current_render_x_pixel++;
		slice = interpolate_slice(interpolator.start, interpolator.end, interpolator.step_count, i);
		paint_wall_slice(cam, slice, texture);
		i++;
	}
}

static void	render_all_pixels_in_group(t_camera *cam, t_world *world, size_t group_size)
{
	size_t	i;

	i = 1;
	while (i < group_size)
	{
		cam->current_render_x_pixel++;
		camera_render_pixel(cam, world, cam->current_render_x_pixel);
		i++;
	}
}

static t_wall_slice_interpolator	interpolator_from_collisions(t_collision start_col, t_collision end_col, size_t start_pixel, t_camera *cam, size_t group_size)
{
	t_wall_slice_interpolator	interpolator;

	if (start_col.exists)
	{
		cam->current_render_x_pixel = start_pixel;
		interpolator.start = calculate_paint_slice(cam, start_col);
		render_wall_collision(cam, interpolator.start, start_col);
	}
	if (end_col.exists)
	{
		cam->current_render_x_pixel = start_pixel + group_size;
		interpolator.end = calculate_paint_slice(cam, end_col);
		render_wall_collision(cam, interpolator.end, end_col);
	}
	interpolator.step_count = group_size;
	return (interpolator);
}

void	camera_render_pixel_group(t_camera *cam, t_world *world, size_t start_pixel, size_t group_size)
{
	t_collision					start_col;
	t_collision					end_col;
	t_graphic_image				*texture;
	t_wall_slice_interpolator	interpolator;

	start_col = collision_from_camera_pixel(cam, world, start_pixel);
	end_col = collision_from_camera_pixel(cam, world, start_pixel + group_size);
	interpolator = interpolator_from_collisions(start_col, end_col, start_pixel, cam, group_size);
	if (!start_col.exists && !end_col.exists)
		return ;
	cam->current_render_x_pixel = start_pixel;
	if (collisions_hit_same_target(start_col, end_col))
	{
		texture = get_texture_from_collision(start_col);
		paint_interpolated_slices(cam, interpolator, texture);
	}
	else
		render_all_pixels_in_group(cam, world, group_size);
}
