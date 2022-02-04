/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_parent_to_colliders.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:23:14 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/03 16:29:41 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.h"

void assign_parent_to_colliders(t_world *w)
{
	size_t i;

	i = 0;
	while (i < w->wall_count)
	{
		w->walls[i].col.parent_wall = &w->walls[i];
		i++;
	}
}
