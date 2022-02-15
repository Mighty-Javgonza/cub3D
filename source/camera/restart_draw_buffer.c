/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restart_draw_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:17:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 15:23:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include "../error/error.h"

void	restart_draw_buffer(t_camera *cam)
{
	float	resolution_proportion;

	if (cam->draw_buffer != NULL)
		free(cam->draw_buffer);
	cam->draw_buffer = malloc(sizeof(*cam->draw_buffer) * cam->res_x * cam->res_y);
	if (!cam->draw_buffer)
		exit_and_message("Couldn't allocate draw buffer\n");
	resolution_proportion = cam->res_x / cam->res_y;
	cam->plane_height = cam->plane_width / resolution_proportion;
}
