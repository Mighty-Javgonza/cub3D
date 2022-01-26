/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_rotate_left.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:56:08 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 17:05:15 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.h"

void	player_rotate_right(t_player *player)
{
	t_vector	perp;
	t_vector	new_direction;

	perp = get_perp_vector(player->cam.direction);
	perp = vector_times_float(perp, player->rotation_speed);
	new_direction = add_vectors(perp, player->cam.direction);
	player->cam.direction = vector_normalize(new_direction);
}
