/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_camera_view.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:54:34 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/06 12:26:02 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"
#include <stdio.h>

void	display_camera_view(t_graphic_environment *ge, t_camera *camera)
{
	size_t			i;
	t_pixpos		pos;
	unsigned int	color;

	i = 0;
	while (i < camera->res_x * camera->res_y)
	{
		pos.x = i % camera->res_x;
		pos.y = i / camera->res_x;
		color = camera->draw_buffer[i];
		ge->draw_buffer.addr[pos.x + pos.y * ge->draw_buffer.line_length / 4] = color;
		i++;
	}
	display_image(ge, &ge->draw_buffer, (t_pixpos){0, 0});
}
