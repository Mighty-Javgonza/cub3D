/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_image.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:10:00 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:32:01 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../world/world.h"

void	camera_render_image(t_camera *camera, t_world *world)
{
	clear_camera_buffer(camera, world);
	calculate_candidate_colliders(camera, world);
	camera_render_all_candidates(camera);
}
