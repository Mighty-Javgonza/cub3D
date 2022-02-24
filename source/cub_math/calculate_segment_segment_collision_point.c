/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_segment_segment_collision_point          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:02:32 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:34:53 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

void	calculate_segment_segment_collision_point(
			t_segment_segment_collider *col)
{
	t_vector	d1;

	d1 = vector_times_float(col->d1, col->factor_a);
	col->collision_point = add_vectors(col->s1->p1, d1);
}
