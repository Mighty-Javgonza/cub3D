/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move_right.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:30:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 16:55:53 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

void	player_move_left(t_player *player)
{
	t_vector	displacement;
	t_vector	perp;

	perp = get_perp_vector(player->cam.direction);
	displacement = vector_times_float(perp, -player->speed);
	player->cam.pos = add_vectors(displacement, player->cam.pos);
}
