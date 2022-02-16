/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_linear_door.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:35:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/11 19:20:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "door.h"

t_linear_door	init_linear_door(void)
{
	t_linear_door	rvalue;

	rvalue = (t_linear_door)
	{
		.wall = NULL,
		.state = 0,
		.speed = DOOR_DEFAULT_SPEED,
		.opening_direction = DOOR_DEFAULT_CLOSING_DIRECTION,
		.displacement = 0,
		.objective_displacement = 1,
	};
	return (rvalue);
}
