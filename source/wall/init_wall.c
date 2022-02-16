/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_wall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:12:07 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/06 18:29:47 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall.h"

t_wall	init_wall(void)
{
	t_wall	rvalue;

	rvalue = (t_wall)
	{
		.width = DEFAULT_WALL_WIDTH,
		.height = DEFAULT_WALL_HEIGHT,
		.col = init_bound_collider(WALL_SEGMENT_COUNT),
		.texturizer = init_collider_texturizer(WALL_SEGMENT_COUNT),
	};
	calculate_wall_segments(&rvalue);
	return (rvalue);
}
