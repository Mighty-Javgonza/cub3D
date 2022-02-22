/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_win.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:49:34 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 12:27:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "controls.h"
#include "../world/world.h"

int	close_win(t_global_environment *global)
{
	destroy_graphic_environment(global->ge);
	destroy_world(global->world, global->ge);
	exit(0);
	return (0);
}
