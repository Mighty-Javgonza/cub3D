/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collision_from_camera_pixel_with_segment.          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:14:52 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 17:56:13 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>

t_collision	collision_from_camera_pixel_with_segment(t_camera *cam, size_t pixel, t_segment *segment)
{
	t_ray_collider	rc;
	t_collision		col;

	rc = camera_pixel_to_ray(cam, pixel);
	rc.direction = vector_normalize(rc.direction);
	col = collide_ray_segment(&rc, segment);
	return (col);
}
