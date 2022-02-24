/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_point_to_camera_pixel.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:25:43 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:46:29 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>

static int	get_pixel(t_camera *cam, float deviation_from_center)
{
	int			pixel;
	size_t		cam_res_x;

	cam_res_x = camera_get_res_x(cam);
	pixel = deviation_from_center * (cam_res_x / 2) + (cam_res_x / 2);
	return (pixel);
}

int	camera_point_to_camera_pixel(t_camera *cam, t_vector point)
{
	float		projection_on_direction;
	float		projection_on_perp;
	t_vector	perp;
	float		deviation_from_center;

	projection_on_direction = vector_dot(cam->direction, point);
	perp = get_perp_vector(cam->direction);
	projection_on_perp = vector_dot(perp, point);
	deviation_from_center = (projection_on_perp
			/ (camera_get_plane_width(cam) / 2))
		* camera_get_plane_distance(cam) / (projection_on_direction
			/ camera_get_plane_distance(cam));
	return (get_pixel(cam, deviation_from_center));
}
