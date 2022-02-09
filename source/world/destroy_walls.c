/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_walls.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:09:22 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 13:26:05 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.h"

void	destroy_walls(t_world *world)
{
	size_t i;

	i = 0;
	while (i < world->wall_count)
	{
		destroy_one_wall(&world->walls[i]);
		i++;
	}
}
