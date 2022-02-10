/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_point_to_camera_pixel.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:25:43 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/10 12:57:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>

int	camera_point_to_camera_pixel(t_camera *cam, t_vector point)
{
	float		projection_on_direction;
	float		projection_on_perp;
	t_vector	perp;
	float		deviation_from_center;

	projection_on_direction = vector_dot(cam->direction, point);
	perp = get_perp_vector(cam->direction);
	projection_on_perp = vector_dot(perp, point);
	deviation_from_center = (projection_on_perp / (cam->plane_width / 2)) * cam->plane_distance / (projection_on_direction / cam->plane_distance);

	int		pixel;

	pixel = deviation_from_center * (cam->res_x / 2) + (cam->res_x / 2);
	return (pixel);
}
