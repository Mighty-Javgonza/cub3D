/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 18:42:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAMERA_H
# define CAMERA_H

# define	DEFAULT_PLANE_WIDTH 100
# define	DEFAULT_PLANE_DISTANCE 3
# define	DEFAULT_CAMERA_RES_X 1920
# define	DEFAULT_CAMERA_RES_Y 1080

#include "../cub_math/cub_math.h"
#include "../ray_collider/ray_collider.h"
#include <stdlib.h>

typedef struct s_camera
{
	t_vector	pos;
	t_vector	direction;
	float		plane_distance;
	float		plane_width;
	size_t		res_x;
	size_t		res_y;
	unsigned int *draw_buffer;
}				t_camera;


t_camera	init_camera();

t_ray_collider	camera_pixel_to_ray(t_camera *cam, size_t index);

void	restart_draw_buffer(t_camera *cam);

void	camera_render_image(t_camera *camera, t_world *world);
void	camera_render_pixel(t_camera *cam, t_world *world, size_t index);


#endif
