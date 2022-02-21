/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:47:29 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 18:46:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"
#include <stdio.h>

int	player_movement(int keycode, t_player *player)
{
	if (keycode == MAC_KEY_DOWN)
		player->move_backwards = 1;
	else if (keycode == MAC_KEY_UP)
		player->move_forwards = 1;
	else if (keycode == MAC_KEY_LEFT)
		player->move_left = 1;
	else if (keycode == MAC_KEY_RIGHT)
		player->move_right = 1;
	else if (keycode == MAC_KEY_A)
		player->rotate_left = 1;
	else if (keycode == MAC_KEY_D)
		player->rotate_right = 1;
	else if (keycode == MAC_KEY_I)
		player_move_up_z(player);
	else if (keycode == MAC_KEY_K)
		player_move_down_z(player);
	else if (keycode == MAC_KEY_SPACEBAR)
		player_jump(player);
	else
		printf("Not valid input\n");
	return (0);
}
