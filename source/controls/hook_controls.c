/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_controls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:54:15 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 15:19:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "controls.h"
#include <mlx.h>
#include "../player/player.h"

void	hook_controls(t_global_environment *global)
{
	mlx_hook(global->ge->win, 2, 0, &player_controls, global);
}
