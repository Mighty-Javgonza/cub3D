/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_is_in_camera_bounds.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:01:27 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 13:32:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>

int	pixel_is_in_camera_bounds(t_camera *cam, int pixel)
{
	if (pixel < 0 || pixel >= (int)camera_get_res_x(cam))
		return (0);
	return (1);
}
