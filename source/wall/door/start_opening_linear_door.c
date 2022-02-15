/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_opening_linear_door.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:43:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/11 17:43:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "door.h"

void	start_opening_linear_door(t_linear_door *door)
{
	door->state = DOOR_STATE_OPENING;
}
