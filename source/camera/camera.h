/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/06 18:49:42 by javgonza         ###   ########.fr       */
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

typedef struct s_camera
{
	t_vector	pos;
	float		z_axis_pos;
	t_vector	direction;
	float		plane_distance;
	float		plane_width;
	float		plane_height;
	size_t		res_x;
	size_t		res_y;
	unsigned int *draw_buffer;
	float		*distances_to_plane;
	size_t		current_render_x_pixel;
}				t_camera;

typedef struct s_wall_slice_painter
{
	int		height_in_screen;
	int		height_in_world;
	int		z_start_in_screen;
	int		z_end_in_screen;
	float	dist_to_slice;
}		t_wall_slice_painter;


t_camera	init_camera();

t_ray_collider	camera_pixel_to_ray(t_camera *cam, size_t index);

void	restart_draw_buffer(t_camera *cam);

void	camera_render_image(t_camera *camera, t_world *world);
void	camera_render_pixel(t_camera *cam, t_world *world, size_t index);



void	camera_render_pixel(t_camera *cam, t_world *world, size_t x_pixel);
void	paint_y_axis(t_camera *cam, t_collision col);

struct s_paint_height;
t_vector	get_vector_to_plane_from_camera_pixel(t_camera *cam, size_t pixel);
void	calculate_distances_to_plane(t_camera *c);



int	get_column_in_image(t_collision col, t_graphic_image *image);
int	get_row_in_image(t_wall_slice_painter slice, int paint_offset, t_graphic_image *image);

void	calculate_slice_z_offset(t_wall_slice_painter *slice, t_camera *cam, t_collision col);
#endif
