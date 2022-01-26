/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:47:29 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 16:15:44 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"
#include <stdio.h>

int	player_movement(int keycode, t_player *player)
{
printf("%d\n", keycode);
	if (keycode == MAC_KEY_DOWN)
		player_move_down(player);
	else if (keycode == MAC_KEY_UP)
		player_move_up(player);
	else if (keycode == MAC_KEY_LEFT)
		player_move_left(player);
	else if (keycode == MAC_KEY_RIGHT)
		player_move_right(player);
	else
		printf("Not valid input\n");
	return (0);
}
