/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_controls.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:13:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 15:16:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "controls.h"

int	player_controls(int keycode, t_global_environment *global)
{
	if (keycode == MAC_KEY_ESCAPE)
		close_win(global);
	else
		player_movement(keycode, &global->world->player);
	return (0);
}
