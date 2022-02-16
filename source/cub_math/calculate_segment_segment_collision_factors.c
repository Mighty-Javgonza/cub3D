/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_segment_segment_collision_facto          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:36:42 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 18:02:48 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"
#include <stdio.h>

static void	collision_calculator(t_segment_segment_collider *col, t_vector s1, t_vector s2)
{
	if (col->s1->p1.x == col->s1->p2.x)
	{
		col->factor_b = (s1.x - s2.y) / (col->d2.y);
		col->factor_a = (s2.y + col->factor_b * col->d2.y - s1.y) / col->d1.y;
	}
	else if (col->s1->p1.y == col->s1->p2.y)
	{
		col->factor_b = (s1.y - s2.y) / (col->d2.x);
		col->factor_a = (s2.x + col->factor_b * col->d2.x - s1.x) / col->d1.x;
	}
	else if (col->s2->p1.x == col->s2->p2.x)
	{
		col->factor_a = (s2.x - s1.x) / (col->d1.x);
		col->factor_b = (s1.x + col->factor_a * col->d1.x - s2.x) / col->d2.x;
	}
	else if (col->s2->p1.y == col->s2->p2.y)
	{
		col->factor_a = (s2.y - s1.y) / (col->d1.y);
		col->factor_b = (s1.x + col->factor_a * col->d1.x - s2.x) / col->d2.x;
	}
	else
	{
		col->factor_a = 10;
		col->factor_b = 2;
	}
}

void	calculate_segment_segment_collision_factors(t_segment_segment_collider *col)
{
	t_vector	s1;
	t_vector	s2;

	col->d1 = sub_vectors(col->s1->p2, col->s1->p1);
	col->d2 = sub_vectors(col->s2->p2, col->s2->p1);
	s1 = col->s1->p1;
	s2 = col->s2->p1;
	collision_calculator(col, s1, s2);
}
