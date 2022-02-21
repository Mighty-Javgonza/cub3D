/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_get_plane_distance.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:24:22 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 17:17:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

float	camera_get_plane_distance(t_camera *camera)
{
	return (camera->representator.plane.distance);
}
