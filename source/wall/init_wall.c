/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_wall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:12:07 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 11:41:11 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall.h"

t_wall	init_wall()
{
	t_wall	rvalue;

	rvalue = (t_wall)
	{
		.width = DEFAULT_WALL_WIDTH,
		.height = DEFAULT_WALL_HEIGHT,
		.col = init_bound_collider(WALL_SEGMENT_COUNT),
	};
	calculate_wall_segments(&rvalue);
	return (rvalue);
}
