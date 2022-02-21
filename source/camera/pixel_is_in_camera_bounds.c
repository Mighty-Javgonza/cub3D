/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_is_in_camera_bounds.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:01:27 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 12:25:01 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

int	pixel_is_in_camera_bounds(t_camera *cam, int pixel)
{
	return (pixel_in_representator_bounds(&cam->representator, pixel));
}
