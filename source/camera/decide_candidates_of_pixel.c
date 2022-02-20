/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decide_candidates_of_pixel.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:41:47 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/16 12:36:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../cub_math/cub_math.h"

void	decide_candidates_of_pixel(t_camera *cam, size_t pixel)
{
	size_t					i;
	t_collision_candidate	*candidate;
	size_t					candidates_in_pixel;
	
	candidates_in_pixel = 0;
	i = 0;
	while (i < cam->collision_candidates_count)
	{
		candidate = &cam->collision_candidates[i];
		if (int_is_in_range(candidate->start_pixel, candidate->end_pixel, pixel))
		{
			candidates_in_pixel++;
			candidate->is_in_pixel = 1;
		}
		else
		{
			candidate->is_in_pixel = 0;
		}
		i++;
	}
}
