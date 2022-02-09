/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_point_to_camera_pixel.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:25:43 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 20:03:06 by javgonza         ###   ########.fr       */
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
	print_vector(point);
printf("dirproj:%f\n", projection_on_direction);
	perp = get_perp_vector(cam->direction);
printf("perpproj:%f\n", projection_on_direction);
	projection_on_perp = vector_dot(perp, point);
	deviation_from_center = projection_on_perp * cam->plane_distance / projection_on_direction;
printf("%f\n", deviation_from_center);

	int		pixel;
//	float	proportion_of_half_screen;
	float	plane_end;
	float	plane_mid;

	plane_mid = 0;
	plane_end = cam->plane_width / 2;	
/*	proportion_of_half_screen = proportion_between(plane_mid, plane_end, deviation_from_center);
*/	pixel = deviation_from_center * (cam->res_x / 2) + (cam->res_x / 2);
	return (pixel);
}
