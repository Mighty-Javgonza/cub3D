/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_to_closest_segment_end.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:30:19 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/13 13:31:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

float	distance_to_closest_segment_end(t_segment segment, t_vector pos)
{
	float	start;
	float	end;

	start = vector_dist(segment.p1, pos);
	end = vector_dist(segment.p2, pos);
	if (start > end)
		return (end);
	return (start);
}
