/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_segment.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:21:01 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 17:21:12 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

t_segment	init_segment(void)
{
	t_segment	rvalue;

	rvalue = (t_segment)
	{
		.p1 = init_vector(),
		.p2 = init_vector(),
	};
	return (rvalue);
}
