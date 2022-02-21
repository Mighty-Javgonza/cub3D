/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_camera.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:30:38 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 13:18:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

void	destroy_camera(t_camera *cam)
{
	destroy_view_representator(&cam->representator);
	free(cam->distances_to_plane);
}
