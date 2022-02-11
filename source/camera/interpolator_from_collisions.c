/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpolator_from_collisions.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:21:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/11 11:23:55 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

t_wall_slice_interpolator	interpolator_from_collisions(t_collision start_col, t_collision end_col, size_t start_pixel, t_camera *cam, size_t group_size)
{
	t_wall_slice_interpolator	interpolator;

	if (start_col.exists)
	{
		cam->current_render_x_pixel = start_pixel;
		interpolator.start = calculate_paint_slice(cam, start_col);
	}
	if (end_col.exists)
	{
		cam->current_render_x_pixel = start_pixel + group_size;
		interpolator.end = calculate_paint_slice(cam, end_col);
	}
	interpolator.step_count = group_size;
	return (interpolator);
}
