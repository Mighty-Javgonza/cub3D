/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_run.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 19:18:00 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 19:21:27 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

void	player_run(t_player *player)
{
	if (!player->running)
	{
		player->speed *= player->run_increase;
		player->running = 1;
		player->breathing_speed *= player->run_increase;
	}
}
