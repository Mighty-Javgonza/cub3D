/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_is_in_camera_bounds.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:01:27 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/16 16:52:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>

int	pixel_is_in_camera_bounds(t_camera *cam, int pixel)
{
	if (pixel < 0 || pixel >= (int)cam->res_x)
		return (0);
	return (1);
}
