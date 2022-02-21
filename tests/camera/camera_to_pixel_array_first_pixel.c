/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 15:43:46 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int main()
{
	t_camera		camera;
	t_ray_collider	rc;

	camera = init_camera();
	camera.representator.res.x = 10;
	camera.representator.plane.distance = 10;
	camera.representator.plane.width = 10;
	rc = camera_pixel_to_ray(&camera, 0);	
	if (!(rc.direction.x > 0.88))
		return (-1);
	return (0);
}
