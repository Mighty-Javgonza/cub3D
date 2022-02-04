/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_in_segment.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:53:50 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/04 13:09:53 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

float	percent_in_segment(t_segment s, t_vector p)
{
	float	segment_length;
	float	length_to_point;
	float	percent_in_segment;

	segment_length = vector_dist(s.p1, s.p2);	
	length_to_point = vector_dist(s.p1, p);
	percent_in_segment = (length_to_point / segment_length) * 100;
	return (percent_in_segment);
}
