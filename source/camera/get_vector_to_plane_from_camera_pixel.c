/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vector_to_plane_from_camera_pixel.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:55:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:23:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

static t_vector	get_perpendicular_vector(t_camera *cam, size_t pixel)
{
	float			pixel_width;
	int				signed_index;
	float			perpendicular_length;
	t_vector		perpendicular_factor;
	t_vector		perpendicular_to_plane;

	perpendicular_to_plane = vector_divided_float(
			get_perp_vector(cam->direction), cam->representator.plane.distance);
	pixel_width = cam->representator.plane.width / cam->representator.res.x;
	signed_index = pixel - cam->representator.res.x / 2;
	perpendicular_length = pixel_width * signed_index;
	perpendicular_factor = vector_times_float(perpendicular_to_plane,
			perpendicular_length);
	return (perpendicular_factor);
}

t_vector	get_vector_to_plane_from_camera_pixel(t_camera *cam, size_t pixel)
{
	t_vector		plane_center;
	t_vector		perpendicular_factor;
	t_vector		pixel_plane;

	plane_center = vector_times_float(cam->direction,
			cam->representator.plane.distance);
	perpendicular_factor = get_perpendicular_vector(cam, pixel);
	pixel_plane = add_vectors(plane_center, perpendicular_factor);
	return (pixel_plane);
}
