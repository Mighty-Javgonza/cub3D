/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpolator_from_collisions.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:21:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 18:02:23 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall_painter.h"
#include "../camera.h"

t_wall_slice_interpolator	interpolator_from_collisions(t_collision start_col, t_collision end_col, size_t start_pixel, t_camera *cam, size_t group_size)
{
	t_wall_slice_interpolator	interpolator;
	t_bound_area				bound_box;

	interpolator.can_be_painted = 1;
	if (start_col.exists)
	{
		cam->current_render_x_pixel = start_pixel;
		interpolator.start = calculate_paint_slice(cam, start_col);
	}
	else
		interpolator.can_be_painted = 0;
	if (end_col.exists)
	{
		cam->current_render_x_pixel = start_pixel + group_size;
		interpolator.end = calculate_paint_slice(cam, end_col);
	}
	else
		interpolator.can_be_painted = 0;

	bound_box.top_left.x = start_pixel;
	bound_box.top_left.y = min_size_t(interpolator.start.z_start_in_screen, interpolator.end.z_start_in_screen);
	bound_box.bot_right.x = start_pixel + group_size;
	bound_box.bot_right.y = max_size_t(interpolator.start.z_end_in_screen, interpolator.end.z_end_in_screen);

	interpolator.step_count = group_size;
	interpolator.space_in_screen.start = start_pixel;
	interpolator.space_in_screen.end = start_pixel + group_size;
	interpolator.bound_box = bound_box;
	return (interpolator);
}
