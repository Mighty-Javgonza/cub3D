/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decide_candidates_of_pixel.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:41:47 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 19:48:48 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include "../cub_math/cub_math.h"

void	decide_candidates_of_pixel(t_camera *cam, size_t pixel)
{
	size_t					i;
	t_collision_candidate	*candidate;
	
	i = 0;
	while (i < cam->collision_candidates_count)
	{
		candidate = &cam->collision_candidates[i];
		if (int_is_in_range(candidate->start_pixel, candidate->end_pixel, pixel))
			candidate->is_in_pixel = 1;
		else
			candidate->is_in_pixel = 0;
		i++;
	}
}
