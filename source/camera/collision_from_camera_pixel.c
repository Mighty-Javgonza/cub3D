/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collision_from_camera_pixel.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:16:35 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 19:49:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include "../world/world.h"

t_collision	collision_from_camera_pixel(t_camera *cam, t_world *world, size_t pixel)
{
	t_ray_collider			rc;
	
	decide_candidates_of_pixel(cam, pixel);
	rc = camera_pixel_to_ray(cam, pixel);
	return (collide_ray_candidates(&rc, cam->collision_candidates, world->wall_count));
}
