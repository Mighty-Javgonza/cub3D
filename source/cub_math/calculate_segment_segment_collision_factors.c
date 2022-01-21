/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_segment_segment_collision_facto          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:36:42 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 17:52:38 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

void	calculate_segment_segment_collision_factors(t_segment_segment_collider *col)
{
	float	m1;
	float	m2;
	float	m3;
	float	m4;
	float	m5;

	m1 = col->s2->p1.x - col->s1->p1.x;
	m2 = col->s2->p2.x - col->s2->p1.x;
	m3 = col->s1->p2.x - col->s1->p1.x;

	m4 = col->s2->p2.y - col->s2->p1.y;
	m5 = col->s2->p1.y - col->s1->p1.y;


	float	t0;
	float	y1 = col->s1->p1.y;
	float	y2 = col->s1->p2.y;

	t0 = (m5 * m3 - m1 * y2 + m1 * y1) / (m2 * y2 - m2 * y1 - m4 * m3);
	col->col_factor_t0 = t0;

	float	s0;

	s0 = (m1 + t0 * m2) / m3;
	col->col_factor_s0 = s0;
}
