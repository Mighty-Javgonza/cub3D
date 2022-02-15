/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_camera_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:05:16 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 12:31:40 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include "../../libft/libft.h"
#include "../world/world.h"

void	clear_camera_buffer(t_camera *cam, t_world *world)
{		
	size_t	i;
	size_t	ceiling_size;

	i = 0;
	ceiling_size = (cam->res_x * cam->res_y) * 7 / 12;
	while (i < ceiling_size)
	{
		cam->draw_buffer[i] = world->ceiling_color;
		i++;
	}
	while (i < cam->res_x * cam->res_y)
	{
		cam->draw_buffer[i] = world->floor_color;
		i++;
	}
}
