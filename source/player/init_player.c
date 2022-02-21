/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:09:59 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 18:44:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

t_player	init_player(void)
{
	t_player	player;

	player.cam = init_camera();
	player.speed = DEFAULT_PLAYER_SPEED;
	player.rotation_speed = DEFAULT_PLAYER_ROTATION_SPEED;
	player.height = DEFAULT_PLAYER_HEIGHT;
	player.jump_force = DEFAULT_PLAYER_JUMP_FORCE;
	player.vertical_speed = 0;
	player.in_air = 0;
	player.move_right = 0;
	player.move_left = 0;
	player.move_forwards = 0;
	player.move_backwards = 0;
	player.rotate_left = 0;
	player.rotate_right = 0;
	player.cam.z_axis_pos = player.height;
	return (player);
}
