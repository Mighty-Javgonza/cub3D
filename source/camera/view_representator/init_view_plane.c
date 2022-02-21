/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_view_plane.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:28:13 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 13:52:08 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"
#include "../camera.h"

t_view_plane	init_view_plane()
{
	t_view_plane	rvalue;

	rvalue = (t_view_plane)
	{
		.distance = DEFAULT_PLANE_DISTANCE,
		.width = DEFAULT_PLANE_WIDTH,
		.height = DEFAULT_PLANE_WIDTH * DEFAULT_CAMERA_RES_Y / DEFAULT_CAMERA_RES_X,
	};
	return (rvalue);
}
