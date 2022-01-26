/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 16:14:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int main()
{
	t_camera		camera;
	t_ray_collider	rc;

	camera = init_camera();
	camera.res_x = 3;
	camera.plane_distance = 10;
	camera.plane_width = 1;
	rc = camera_pixel_to_ray(&camera, 1);	
	if (rc.direction.x != 1)
		return (-1);
	camera.direction.x = -1;
	rc = camera_pixel_to_ray(&camera, 1);
	print_vector(rc.direction);
	if (rc.direction.x != -1)
		return (-1);
	return (0);
}
