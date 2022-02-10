/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_controls.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:13:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/10 14:35:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "controls.h"
#include <stdio.h>

int	player_controls(int keycode, t_global_environment *global)
{
printf("key:%d\n", keycode);
	if (keycode == MAC_KEY_ESCAPE)
		close_win(global);
	else
		player_movement(keycode, &global->world->player);
	return (0);
}
