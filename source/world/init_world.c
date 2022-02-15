/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_world.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:42:50 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 12:01:08 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.h"

t_world	init_world()
{
	t_world	rvalue;

	rvalue = (t_world)
	{
		.walls = NULL,
		.wall_count = 0,
		.player = init_player(),
		.floor_color = 0x35f704,
		.ceiling_color = 0xf704c6,
	};
	return (rvalue);
}
