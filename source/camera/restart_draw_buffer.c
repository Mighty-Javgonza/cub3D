/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restart_draw_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:17:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 17:47:50 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

void	restart_draw_buffer(t_camera *cam)
{
	if (cam->draw_buffer != NULL)
		free(cam->draw_buffer);
	cam->draw_buffer = malloc(sizeof(*cam->draw_buffer) * cam->res_x * cam->res_y);
	if (!cam->draw_buffer)
		exit(-1); //TODO mensajito de error
}
