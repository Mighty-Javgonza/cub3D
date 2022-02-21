/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 15:44:16 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int main()
{
	t_camera		camera;
	t_ray_collider	rc;

	camera = init_camera();
	camera.representator.res.x = 3;
	camera.representator.plane.distance = 10;
	camera.representator.plane.width = 1;
	rc = camera_pixel_to_ray(&camera, 1);	
	if (rc.direction.y != 0)
		return (-1);
	camera.direction.x = -1;
	rc = camera_pixel_to_ray(&camera, 1);
	if (rc.direction.y != 0 || !(rc.direction.x < 0))
		return (-1);
	return (0);
}
