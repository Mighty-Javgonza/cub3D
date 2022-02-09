/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_events.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:43:09 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 13:42:55 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "controls.h"
#include <mlx.h>

void	hook_events(t_global_environment *global)
{
	mlx_hook(global->ge->win, 17, 0, close_win, global);
}
