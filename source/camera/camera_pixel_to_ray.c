/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_pixel_to_ray.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:34:51 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/13 12:34:15 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>

t_ray_collider	camera_pixel_to_ray(t_camera *cam, size_t index)
{
	t_ray_collider	rc;
	t_vector		vector_to_plane;

	vector_to_plane = get_vector_to_plane_from_camera_pixel(cam, index);
	rc = init_ray_collider();
	rc.origin = cam->pos;
	rc.direction = vector_divided_float(vector_to_plane, cam->distances_to_plane[index]);
	return (rc);
}
