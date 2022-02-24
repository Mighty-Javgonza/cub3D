/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_distances_to_plane.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:42:46 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:47:58 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

void	calculate_distances_to_plane(t_camera *c)
{
	size_t			i;
	t_vector		vector_to_plane;

	i = 0;
	while (i < camera_get_res_x(c))
	{
		vector_to_plane = get_vector_to_plane_from_camera_pixel(c, i);
		c->distances_to_plane[i] = vector_length(vector_to_plane);
		i++;
	}
}
