/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restart_draw_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:17:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 14:20:38 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include "../error/error.h"

void	restart_draw_buffer(t_camera *cam)
{
	set_view_representator_resolution(&cam->representator, cam->representator.res);
}
