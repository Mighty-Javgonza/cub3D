/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_colors_parsed.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:18:10 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:18:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	all_colors_parsed(t_map *map)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if (map->parsed_colors[i] == 0)
			return (0);
		i++;
	}
	return (1);
}
