/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall_painter.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:26 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 17:04:12 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WALL_PAINTER_H
# define WALL_PAINTER_H

#include <stdlib.h>
#include "../../cub_math/cub_math.h"
#include "../../graphics/graphics.h"

typedef struct s_camera					t_camera;
typedef struct s_camera_bound_box		t_camera_bound_box;
typedef struct s_collision_candidate	t_collision_candidate;
typedef struct s_graphic_image			t_graphic_image;

typedef	t_int_range	t_camera_range;

typedef struct s_wall_slice_painter
{
	int		height_in_screen;
	int		height_in_world;
	int		z_start_in_screen;
	int		z_end_in_screen;
	float	dist_to_slice;
	int		column_in_image;
	float	image_step;
}		t_wall_slice_painter;

typedef struct s_wall_slice_interpolator
{
	t_wall_slice_painter	start;
	t_wall_slice_painter	end;
	size_t					step_count;
	int						can_be_painted;
	t_camera_range			space_in_screen;
	t_bound_area			bound_box;
}				t_wall_slice_interpolator;

int	get_column_in_image(t_collision col, t_graphic_image *image);
int	get_row_in_image(t_wall_slice_painter slice, int paint_offset);
t_wall_slice_interpolator	camera_get_interpolator_from_segment(t_camera *cam, t_collision_candidate *candidate, size_t segment_index);
t_wall_slice_interpolator	interpolator_from_collisions(t_collision start_col, t_collision end_col, size_t start_pixel, t_camera *cam, size_t group_size);
t_wall_slice_painter	calculate_paint_slice(t_camera *cam, t_collision col);
t_wall_slice_painter	interpolate_slice(t_wall_slice_painter start_slice, t_wall_slice_painter end_slice, size_t max_value, size_t value);
void	calculate_slice_z_offset(t_wall_slice_painter *slice, t_camera *cam, t_collision col);
void	paint_wall_slice(t_camera *cam, t_wall_slice_painter slice, t_graphic_image *texture);
#endif
