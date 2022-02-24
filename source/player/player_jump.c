/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_jump.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:42:48 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:25:06 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

void	player_jump(t_player *player)
{
	static int	jumps = 0;

	if (!player->in_air)
	{
		player->vertical_speed = player->jump_force;
		player->in_air = 1;
		jumps = 1;
	}
	else if (jumps < 2)
	{
		player->vertical_speed += player->jump_force;
		jumps++;
	}
}
