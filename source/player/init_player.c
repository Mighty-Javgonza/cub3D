/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:09:59 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 15:38:30 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

t_player	init_player(void)
{
	t_player	player;

	player.cam = init_camera();
	player.speed = DEFAULT_PLAYER_SPEED;
	return (player);
}
