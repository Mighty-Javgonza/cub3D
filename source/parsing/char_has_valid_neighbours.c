/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_has_valid_neighbours.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:04:16 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 15:32:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>

static int	neighbour_at_is_valid(t_map *map, int x, int y)
{
	char	neighbour;

	neighbour = get_map_char_at(map, x, y);
	if (!ft_ischarset(neighbour, VALID_NEIGHBOURS))
		return  (0);
	return (1);
}

int	char_has_valid_neighbours(t_map *map, int x, int y)
{
	char	is_valid_neighbour;

	if (x == 0 || y == 0)
		return (0);
	is_valid_neighbour = neighbour_at_is_valid(map, x - 1, y - 1);
	is_valid_neighbour = is_valid_neighbour && neighbour_at_is_valid(map, x, y - 1);
	is_valid_neighbour = is_valid_neighbour && neighbour_at_is_valid(map, x + 1, y - 1);
	is_valid_neighbour = is_valid_neighbour && neighbour_at_is_valid(map, x - 1, y);
	is_valid_neighbour = is_valid_neighbour && neighbour_at_is_valid(map, x + 1, y);
	is_valid_neighbour = is_valid_neighbour && neighbour_at_is_valid(map, x - 1, y + 1);
	is_valid_neighbour = is_valid_neighbour && neighbour_at_is_valid(map, x, y + 1);
	is_valid_neighbour = is_valid_neighbour && neighbour_at_is_valid(map, x + 1, y + 1);
	return (is_valid_neighbour);
}
