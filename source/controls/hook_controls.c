/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_controls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:54:15 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 18:58:53 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "controls.h"
#include <mlx.h>
#include "../player/player.h"

void	hook_controls(void *win, t_player *player)
{
	mlx_hook(win, 2, 0, &player_movement, player);
}
