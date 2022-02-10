/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_update_movement.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:30:11 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/10 14:33:04 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

void	player_update_movement(t_player *player)
{
	if (player->move_right == 1)
		player_move_right(player);
	 if (player->move_left == 1)
		player_move_left(player);
	 if (player->move_forwards == 1)
		player_move_up(player);
	 if (player->move_backwards == 1)
		player_move_down(player);
	 if (player->rotate_right == 1)
		player_rotate_right(player);
	 if (player->rotate_left == 1)
		player_rotate_left(player);
}
