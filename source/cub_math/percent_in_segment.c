/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_in_segment.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:53:50 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/06 13:24:33 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"
#include <stdio.h>

float	percent_in_segment(t_segment s, t_vector p)
{
	t_vector	segment_director;
	t_vector	diff;
	float		proportion_in_segment;

	segment_director = sub_vectors(s.p2, s.p1);
	diff = sub_vectors(p, s.p1);
	if (segment_director.x == 0)
		proportion_in_segment = diff.y / segment_director.y;
	else
		proportion_in_segment = diff.x / segment_director.x;
	if (proportion_in_segment > 1)
		proportion_in_segment = 1;
	else if (proportion_in_segment < 0)
		proportion_in_segment = 0;
	return (proportion_in_segment * 100.0);
}
