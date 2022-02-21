/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_camera_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:05:16 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 18:56:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include "../../libft/libft.h"
#include "../world/world.h"

void	clear_camera_buffer(t_camera *cam, t_world *world)
{		
/*	size_t	i;
	size_t	ceiling_size;
	size_t	cam_res_x;
	size_t	cam_res_y;

	cam_res_x = camera_get_res_x(cam); 
	cam_res_y = camera_get_res_y(cam); 
	i = 0;
	ceiling_size = (cam_res_x * cam_res_y) * 7 / 12;
	while (i < ceiling_size)
	{
		cam->representator.draw_buffer[i] = world->ceiling_color;
		i++;
	}
	while (i < cam_res_x * cam_res_y)
	{
		cam->representator.draw_buffer[i] = world->floor_color;
		i++;
	}*/
	paint_representator_background(&cam->representator, world);
}
