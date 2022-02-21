/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_jump.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:42:48 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 18:46:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

void	player_jump(t_player *player)
{
	if (!player->in_air)
	{
		player->vertical_speed = player->jump_force;
		player->in_air = 1;
	}
}
