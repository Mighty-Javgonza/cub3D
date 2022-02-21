/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vector_to_plane_from_camera_pixel.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:55:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 17:25:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

t_vector	get_vector_to_plane_from_camera_pixel(t_camera *cam, size_t pixel)
{
	t_vector		plane_center;
	t_vector		perpendicular_to_plane;
	t_vector		perpendicular_factor;
	float			pixel_width;
	int				signed_index;
	float			perpendicular_length;
	t_vector		pixel_plane;

	plane_center = vector_times_float(cam->direction, cam->representator.plane.distance);
	perpendicular_to_plane = vector_divided_float(get_perp_vector(cam->direction), cam->representator.plane.distance);
	pixel_width = cam->representator.plane.width / cam->representator.res.x;
	signed_index = pixel - cam->representator.res.x / 2;
	perpendicular_length = pixel_width * signed_index;
	perpendicular_factor = vector_times_float(perpendicular_to_plane, perpendicular_length);
	pixel_plane = add_vectors(plane_center, perpendicular_factor);
	return (pixel_plane);
}
