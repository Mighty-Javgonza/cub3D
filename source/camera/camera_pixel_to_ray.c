/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_pixel_to_ray.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:34:51 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 13:14:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

t_ray_collider	camera_pixel_to_ray(t_camera *cam, size_t index)
{
	t_vector		plane_center;
	t_ray_collider	rc;
	t_vector		perpendicular_to_plane;
	t_vector		perpendicular_factor;
	float			pixel_width;
	int				signed_index;
	float			perpendicular_length;
	t_vector		pixel_plane;

	rc = init_ray_collider();
	rc.origin = cam->pos;
	plane_center = vector_times_float(cam->direction, cam->plane_distance);
	perpendicular_to_plane = vector_times_float(get_perp_vector(cam->direction), 1 / cam->plane_distance);
	pixel_width = cam->plane_width / cam->res_x;
	signed_index = index - cam->res_x / 2;
	perpendicular_length = pixel_width * signed_index;
	perpendicular_factor = vector_times_float(perpendicular_to_plane, perpendicular_length);
	pixel_plane = add_vectors(plane_center, perpendicular_factor);
	cam->distances_to_plane[index] = vector_length(pixel_plane);
	rc.direction = vector_normalize(pixel_plane);
	return (rc);
}
