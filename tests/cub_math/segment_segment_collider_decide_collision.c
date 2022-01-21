/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:20:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 18:01:18 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	t_segment_segment_collider	col;

	col = init_segment_segment_collider();
	col.col_factor_s0 = 0.5;
	col.col_factor_t0 = 0.5;
	segment_segment_collider_decide_collision(&col);
	if (col.exists != 1)
		return (-1);
	col.col_factor_s0 = -1;
	segment_segment_collider_decide_collision(&col);
	if (col.exists != 0)
		return (-1);
	return (0);
}
