/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_segment_segment_collision_point          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:02:32 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 18:05:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

void	calculate_segment_segment_collision_point(t_segment_segment_collider *col)
{
	float	m1;
	float	m2;

	m1 = col->s1->p2.x - col->s1->p1.x;
	m2 = col->s1->p2.y - col->s1->p1.y;
	col->collision_point.x = col->s1->p1.x + col->col_factor_s0 * m1;
	col->collision_point.y = col->s1->p1.y + col->col_factor_s0 * m2;
}
