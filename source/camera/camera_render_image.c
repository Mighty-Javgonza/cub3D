/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_image.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:10:00 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/19 19:32:05 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../world/world.h"

# if 1
void	camera_render_image(t_camera *camera, t_world *world)
{
	clear_camera_buffer(camera, world);
	calculate_candidate_colliders(camera, world);
	camera_render_all_candidates(camera);
}

#else

void	camera_render_image(t_camera *camera, t_world *world)
{
	size_t	i;
	size_t	group_size = 10;


	calculate_candidate_colliders(camera, world);
	clear_camera_buffer(camera, world);
	i = 0;
	while (i <= camera->res_x - group_size)
	{
		camera_render_pixel_group(camera, world, i, group_size);
		i += group_size + 1;
	}
	while (i < camera->res_x)
	{
		camera_render_pixel(camera, world, i);
		i++;
	}
}
#endif
