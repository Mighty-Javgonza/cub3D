/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restart_draw_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:17:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/06 15:33:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

void	restart_draw_buffer(t_camera *cam)
{
	float	resolution_proportion;

	if (cam->draw_buffer != NULL)
		free(cam->draw_buffer);
	cam->draw_buffer = malloc(sizeof(*cam->draw_buffer) * cam->res_x * cam->res_y);
	if (!cam->draw_buffer)
		exit(-1); //TODO mensajito de error
	resolution_proportion = cam->res_x / cam->res_y;
	cam->plane_height = cam->plane_width / resolution_proportion;
}
