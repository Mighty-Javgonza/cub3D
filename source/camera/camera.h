/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/11 11:24:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAMERA_H
# define CAMERA_H

# define	DEFAULT_PLANE_WIDTH 5
# define	DEFAULT_PLANE_DISTANCE 2
# define	DEFAULT_CAMERA_RES_X 1920
# define	DEFAULT_CAMERA_RES_Y 1080

#include "../cub_math/cub_math.h"
#include "../ray_collider/ray_collider.h"
#include <stdlib.h>

typedef struct s_collision_candidate
{
	t_bound_collider	*col;
	size_t				start_pixel;
	size_t				end_pixel;
	unsigned int		is_in_screen;
	unsigned int		is_in_pixel;
}				t_collision_candidate;

typedef struct s_camera
{
	t_vector				pos;
	float					z_axis_pos;
	t_vector				direction;
	float					plane_distance;
	float					plane_width;
	float					plane_height;
	size_t					res_x;
	size_t					res_y;
	unsigned int			*draw_buffer;
	float					*distances_to_plane;
	size_t					current_render_x_pixel;
	t_collision_candidate	*collision_candidates;
	size_t					collision_candidates_count;
}				t_camera;

typedef struct s_wall_slice_painter
{
	int		height_in_screen;
	int		height_in_world;
	int		z_start_in_screen;
	int		z_end_in_screen;
	float	dist_to_slice;
	int		column_in_image;
}		t_wall_slice_painter;

typedef struct s_wall_slice_interpolator
{
	t_wall_slice_painter	start;
	t_wall_slice_painter	end;
	size_t					step_count;
}				t_wall_slice_interpolator;


t_camera	init_camera();

t_ray_collider	camera_pixel_to_ray(t_camera *cam, size_t index);

void	restart_draw_buffer(t_camera *cam);

void	camera_render_image(t_camera *camera, t_world *world);
void	camera_render_pixel(t_camera *cam, t_world *world, size_t x_pixel);
t_vector	get_vector_to_plane_from_camera_pixel(t_camera *cam, size_t pixel);
void	calculate_distances_to_plane(t_camera *c);
int	get_column_in_image(t_collision col, t_graphic_image *image);
int	get_row_in_image(t_wall_slice_painter slice, int paint_offset, t_graphic_image *image);
void	calculate_slice_z_offset(t_wall_slice_painter *slice, t_camera *cam, t_collision col);
t_wall_slice_painter	calculate_paint_slice(t_camera *cam, t_collision col);
void	paint_wall_slice(t_camera *cam, t_wall_slice_painter slice, t_graphic_image *texture);
t_collision	collision_from_camera_pixel(t_camera *cam, t_world *world, size_t pixel);
void	camera_render_pixel_group(t_camera *cam, t_world *world, size_t start_pixel, size_t group_size);
t_wall_slice_painter	interpolate_slice(t_wall_slice_painter start_slice, t_wall_slice_painter end_slice, size_t max_value, size_t value);


void	calculate_candidate_colliders(t_camera *cam, t_world *world);

void	destroy_camera(t_camera *cam);

int	camera_point_to_camera_pixel(t_camera *cam, t_vector point);

void	decide_candidates_of_pixel(t_camera *cam, size_t pixel);

t_wall_slice_interpolator	interpolator_from_collisions(t_collision start_col, t_collision end_col, size_t start_pixel, t_camera *cam, size_t group_size);
#endif
