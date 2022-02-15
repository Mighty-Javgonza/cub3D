/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_closing_linear_door.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 18:21:21 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/11 18:21:32 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "door.h"

void	start_closing_linear_door(t_linear_door *door)
{
	door->state = DOOR_STATE_CLOSING;
}
