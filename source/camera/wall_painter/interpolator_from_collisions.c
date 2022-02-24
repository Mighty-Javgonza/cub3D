/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpolator_from_collisions.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:21:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:14:48 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall_painter.h"
#include "../camera.h"

static void	set_interpolator_bound_box(t_camera_range range,
			t_wall_slice_interpolator *interpolator)
{
	t_bound_area				bound_box;

	bound_box.top_left.x = range.start;
	bound_box.top_left.y = min_size_t(interpolator->start.z_start_in_screen,
			interpolator->end.z_start_in_screen);
	bound_box.bot_right.x = range.end;
	bound_box.bot_right.y = max_size_t(interpolator->start.z_end_in_screen,
			interpolator->end.z_end_in_screen);
	interpolator->bound_box = bound_box;
}

t_wall_slice_interpolator	interpolator_from_collisions(t_collision start_col,
			t_collision end_col, t_camera_range range, t_camera *cam)
{
	t_wall_slice_interpolator	interpolator;

	interpolator.can_be_painted = 1;
	if (start_col.exists)
	{
		cam->current_render_x_pixel = range.start;
		interpolator.start = calculate_paint_slice(cam, start_col);
	}
	else
		interpolator.can_be_painted = 0;
	if (end_col.exists)
	{
		cam->current_render_x_pixel = range.end;
		interpolator.end = calculate_paint_slice(cam, end_col);
	}
	else
		interpolator.can_be_painted = 0;
	set_interpolator_bound_box(range, &interpolator);
	interpolator.step_count = range.end - range.start;
	interpolator.space_in_screen.start = range.start;
	interpolator.space_in_screen.end = range.end;
	return (interpolator);
}
