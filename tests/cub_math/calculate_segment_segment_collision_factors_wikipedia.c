/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:20:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 17:54:33 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	t_segment					s1;
	t_segment					s2;
	t_segment_segment_collider	col;

	s1 = (t_segment){(t_vector){1, 1},(t_vector){3, 2}};
	s2 = (t_segment){(t_vector){1, 4},(t_vector){2, -1}};
	col = init_segment_segment_collider();
	col.s1 = &s1;
	col.s2 = &s2;
	calculate_segment_segment_collision_factors(&col);
	if (col.col_factor_s0 * 11 != 3 || col.col_factor_t0 * 11 != 6)
		return (-1);
	return (0);
}
