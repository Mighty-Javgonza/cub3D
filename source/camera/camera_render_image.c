/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_render_image.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:10:00 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 18:11:35 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include "../world/world.h"

void	camera_render_image(t_camera *camera, t_world *world)
{
	size_t	i;
	
	i = 0;
	while (i < camera->res_x)
	{
		camera_render_pixel(camera, world, i);
		i++;
	}
}
