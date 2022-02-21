/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 17:28:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAMERA_H
# define CAMERA_H

# define	DEFAULT_CAMERA_RES_X 1920
# define	DEFAULT_CAMERA_RES_Y 1080

#include "../cub_math/cub_math.h"
#include "../ray_collider/ray_collider.h"
#include "wall_painter/wall_painter.h"
#include "view_representator/view_representator.h" 
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
	t_view_representator	representator;
	float					*distances_to_plane;
	size_t					current_render_x_pixel;
	t_collision_candidate	*collision_candidates;
	size_t					collision_candidates_count;
}				t_camera;

t_camera	init_camera();
t_ray_collider	camera_pixel_to_ray(t_camera *cam, size_t index);
void	restart_draw_buffer(t_camera *cam);
void	camera_render_image(t_camera *camera, t_world *world);
void	camera_render_pixel(t_camera *cam, t_world *world, size_t x_pixel);
t_vector	get_vector_to_plane_from_camera_pixel(t_camera *cam, size_t pixel);
void	calculate_distances_to_plane(t_camera *c);
int	get_column_in_image(t_collision col, t_graphic_image *image);
t_collision	collision_from_camera_pixel(t_camera *cam, t_world *world, size_t pixel);
void	camera_render_pixel_group(t_camera *cam, t_world *world, size_t start_pixel, size_t group_size);
void	calculate_candidate_colliders(t_camera *cam, t_world *world);
void	destroy_camera(t_camera *cam);
int	camera_point_to_camera_pixel(t_camera *cam, t_vector point);
void	decide_candidates_of_pixel(t_camera *cam, size_t pixel);
void	camera_render_candidate(t_camera *cam, size_t candidate_index);
t_camera_range	get_segment_range(t_camera *cam, t_segment segment, t_vector pos);
void	camera_render_candidate_segment(t_camera *cam, t_collision_candidate *candidate, size_t segment_index);
t_collision	collision_from_camera_pixel_with_segment(t_camera *cam, size_t pixel, t_segment *segment);
int	pixel_is_in_camera_bounds(t_camera *cam, int pixel);
void	camera_render_all_candidates(t_camera *camera);
t_collision	collision_from_camera_pixel_with_candidate(t_camera *camera, size_t candidate_index, size_t pixel);
void	clear_camera_buffer(t_camera *cam, t_world *world);
void	paint_interpolated_slices(t_camera *cam, t_wall_slice_interpolator interpolator, t_graphic_image *texture);


size_t	camera_get_res_x(t_camera *camera);
size_t	camera_get_res_y(t_camera *camera);
float	camera_get_plane_height(t_camera *camera);
float	camera_get_plane_width(t_camera *camera);
float	camera_get_plane_distance(t_camera *camera);

#endif
