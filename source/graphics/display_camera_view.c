/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_camera_view.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:54:34 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 13:48:46 by javgonza         ###   ########.fr       */
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
	cam_line_length = camera_get_res_x(camera) * sizeof(unsigned int);
	y = 0;
	while (y < camera_get_res_y(camera))
	{
		ft_memcpy(&(ge->draw_buffer.addr[y * line_length]), camera->representator.draw_buffer + (y * camera_get_res_x(camera)), cam_line_length);
		y++;
	}
	display_image(ge, &ge->draw_buffer, (t_pixpos){0, 0});
}
