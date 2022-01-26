/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide_segments.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:11:20 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 17:50:00 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"
#include <stdio.h>

t_collision	collide_segments(t_segment *s1, t_segment *s2)
{
	t_segment_segment_collider	col;
	t_collision					rvalue;

	col = init_segment_segment_collider();
	col.s1 = s1;
	col.s2 = s2;
	calculate_segment_segment_collision_factors(&col);
	calculate_segment_segment_collision_point(&col);
	segment_segment_collider_decide_collision(&col);
	rvalue.exists = col.exists;
	rvalue.pos = col.collision_point;
	rvalue.dist = col.factor_a;
	return (rvalue);
}
