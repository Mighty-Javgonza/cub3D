/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_interpolated_slices.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 11:15:48 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 12:38:03 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>

#if 0
void	paint_interpolated_slices(t_camera *cam, t_wall_slice_interpolator interpolator, t_graphic_image *texture)
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
# else
void	paint_interpolated_slices(t_camera *cam, t_wall_slice_interpolator interpolator, t_graphic_image *texture)
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
#endif
