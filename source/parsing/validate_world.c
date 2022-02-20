/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_world.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:35:54 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/19 19:26:15 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

void	validate_world(t_map *map)
{
	if (has_player(map) != 1)
	{
		map->valid = 0;
		return ;
	}
	if (closed_map(map) == 0)
	{
		map->valid = 0;
		return ;
	}
}
