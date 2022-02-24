/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_textures_parsed.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:18:09 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:18:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	all_textures_parsed(t_map *map)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (map->parsed_textures[i] == 0)
			return (0);
		i++;
	}
	return (1);
}
