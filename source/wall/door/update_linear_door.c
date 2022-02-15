/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_linear_door.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:46:04 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/11 19:20:31 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "door.h"

void	update_linear_door(t_linear_door *door)
{
	t_vector	*door_pos;

	door_pos = &door->wall->col.pos;
	if (door->state == DOOR_STATE_OPENING)
	{
		if (door->displacement + door->speed >= door->objective_displacement)
			door->state = DOOR_STATE_OPENED;
		else
		{
			*door_pos = add_vectors(*door_pos, vector_times_float(door->opening_direction, door->speed));
			door->displacement += door->speed;
		}
	}
	if (door->state == DOOR_STATE_CLOSING)
	{
		if (door->displacement - door->speed <= 0)
			door->state = DOOR_STATE_CLOSED;
		else
		{
			door->wall->col.pos = add_vectors(door->wall->col.pos, vector_times_float(door->opening_direction, -door->speed));
			door->displacement -= door->speed;
		}
	}
}
