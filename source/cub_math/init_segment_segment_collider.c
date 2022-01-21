/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_segment_segment_collider.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:24:30 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 17:59:06 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"
#include <stdlib.h>

t_segment_segment_collider	init_segment_segment_collider()
{
	t_segment_segment_collider	rvalue;

	rvalue = (t_segment_segment_collider)
	{
		.exists = 0,
		.s1 = NULL,
		.s2 = NULL,
		.col_factor_s0 = 0,
		.col_factor_t0 = 0,
		.collision_point = init_vector(),
	};
	return (rvalue);
}
