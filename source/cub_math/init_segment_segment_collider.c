/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_segment_segment_collider.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:24:30 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:44 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"
#include <stdlib.h>

t_segment_segment_collider	init_segment_segment_collider(void)
{
	t_segment_segment_collider	rvalue;

	rvalue = (t_segment_segment_collider)
	{
		.exists = 0,
		.s1 = NULL,
		.s2 = NULL,
		.factor_a = 0,
		.factor_b = 0,
		.collision_point = init_vector(),
	};
	return (rvalue);
}
