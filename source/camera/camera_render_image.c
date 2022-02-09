/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_image.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:10:00 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 17:56:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include "../world/world.h"

void	camera_render_image(t_camera *camera, t_world *world)
{
	size_t	i;
	size_t	group_size = 30;
	
	calculate_candidate_colliders(camera, world);
	i = 0;
	while (i < camera->res_x - group_size)
	{
		camera_render_pixel_group(camera, world, i, group_size);
		i += group_size + 1;
	}
}
