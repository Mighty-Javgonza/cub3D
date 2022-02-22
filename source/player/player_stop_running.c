/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_stop_running.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:18:54 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 19:26:16 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

void	player_stop_running(t_player *player)
{
	if (player->running)
	{
		player->running = 0;
		player->speed /= player->run_increase;
		player->breathing_speed /= player->run_increase;
	}
}
