/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:47:29 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 19:20:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"
#include <stdio.h>

int	player_movement_release(int keycode, t_player *player)
{
	if (keycode == MAC_KEY_DOWN)
		player->move_backwards = 0;
	else if (keycode == MAC_KEY_UP)
		player->move_forwards = 0;
	else if (keycode == MAC_KEY_LEFT)
		player->move_left = 0;
	else if (keycode == MAC_KEY_RIGHT)
		player->move_right = 0;
	else if (keycode == MAC_KEY_A)
		player->rotate_left = 0;
	else if (keycode == MAC_KEY_D)
		player->rotate_right = 0;
	else if (keycode == MAC_KEY_I)
		player_move_up_z(player);
	else if (keycode == MAC_KEY_SHIFT_LEFT)
		player_stop_running(player);
	else
		printf("Not valid input\n");
	return (0);
}
