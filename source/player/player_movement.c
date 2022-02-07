/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:47:29 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 10:54:59 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"
#include <stdio.h>

int	player_movement(int keycode, t_player *player)
{
	if (keycode == MAC_KEY_DOWN)
		player_move_down(player);
	else if (keycode == MAC_KEY_UP)
		player_move_up(player);
	else if (keycode == MAC_KEY_LEFT)
		player_move_left(player);
	else if (keycode == MAC_KEY_RIGHT)
		player_move_right(player);
	else if (keycode == MAC_KEY_A)
		player_rotate_left(player);
	else if (keycode == MAC_KEY_D)
		player_rotate_right(player);
	else if (keycode == MAC_KEY_I)
		player_move_up_z(player);
	else if (keycode == MAC_KEY_K)
		player_move_down_z(player);
	else
		printf("Not valid input\n");
	return (0);
}
