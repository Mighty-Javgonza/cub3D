/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collision_from_camera_pixel_with_candidat          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:20:15 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:27:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

t_collision	collision_from_camera_pixel_with_candidate(t_camera *camera,
			size_t candidate_index, size_t pixel)
{
	t_ray_collider	rc;

	rc = camera_pixel_to_ray(camera, pixel);
	rc.origin = camera->pos;
	return (collide_ray_bound_collider(&rc,
			camera->collision_candidates[candidate_index].col));
}
