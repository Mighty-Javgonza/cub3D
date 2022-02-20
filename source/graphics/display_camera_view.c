/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_camera_view.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:54:34 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 12:57:06 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"
#include "../../libft/libft.h"
#include "../camera/camera.h"

void	display_camera_view(t_graphic_environment *ge, t_camera *camera)
{
	size_t			y;
	int				line_length;
	int				cam_line_length;

	line_length = ge->draw_buffer.line_length / 4;
	cam_line_length = camera->res_x * sizeof(unsigned int);
	y = 0;
	while (y < camera->res_y)
	{
		ft_memcpy(&(ge->draw_buffer.addr[y * line_length]), camera->draw_buffer + (y * camera->res_x), cam_line_length);
		y++;
	}
	display_image(ge, &ge->draw_buffer, (t_pixpos){0, 0});
}
