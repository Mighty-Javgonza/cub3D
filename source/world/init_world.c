/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_world.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:42:50 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 17:09:06 by javgonza         ###   ########.fr       */
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
	};
	return (rvalue);
}
