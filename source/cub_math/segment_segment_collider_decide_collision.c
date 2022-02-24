/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segment_segment_collider_decide_collision          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:56:16 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:34:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"
#include <stdio.h>

static int	point_in_segment_bound(t_vector v, t_segment *s)
{
	if (s->p1.x < s->p2.x)
		if (v.x > s->p2.x + 0.001 || v.x < s->p1.x - 0.001)
			return (0);
	if (s->p1.x > s->p2.x)
		if (v.x < s->p2.x - 0.001 || v.x > s->p1.x + 0.001)
			return (0);
	if (s->p1.y < s->p2.y)
		if (v.y > s->p2.y + 0.001 || v.y < s->p1.y - 0.001)
			return (0);
	if (s->p1.y > s->p2.y)
		if (v.y < s->p2.y - 0.001 || v.y > s->p1.y + 0.001)
			return (0);
	return (1);
}

void	segment_segment_collider_decide_collision(
				t_segment_segment_collider *col)
{
	col->exists = 0;
	if (point_in_segment_bound(col->collision_point, col->s1))
		if (point_in_segment_bound(col->collision_point, col->s2))
			col->exists = 1;
}
