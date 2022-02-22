/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move_right.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:30:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 19:16:59 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

void	player_move_up(t_player *player)
{
	t_vector displacement;

	displacement = vector_times_float(player->cam.direction, player->speed);
	player->cam.pos = add_vectors(player->cam.pos, displacement);
}
