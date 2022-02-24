/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_update_movement.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:30:11 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:28:05 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"
#include <stdio.h>
#include <math.h>

static void	apply_gravity(t_player *player)
{
	player->vertical_speed -= GRAVITY;
	if (player->vertical_speed < 0
		&& player->cam.z_axis_pos - player->height
		+ player->vertical_speed < 0)
	{
		player->vertical_speed = 0;
		player->in_air = 0;
		player->cam.z_axis_pos = player->height;
	}
	player->cam.z_axis_pos += player->vertical_speed;
}

static void	apply_breathing(t_player *player, int frame)
{
	if (!player->move_right && !player->move_left
		&& !player->move_forwards && !player->move_backwards)
		player->moving = 0;
	else
		player->moving = 1;
	player->breathing_offset = cos(((float)frame / 7.0
				* player->breathing_speed)) / 70;
	if (player->moving)
		player->height = player->original_height + player->breathing_offset;
	else
	{
		player->height = player->original_height;
		player->breathing_offset = 0;
	}
}

void	player_update_movement(t_player *player)
{
	static int	frame = 0;

	frame++;
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
	apply_gravity(player);
	apply_breathing(player, frame);
}
