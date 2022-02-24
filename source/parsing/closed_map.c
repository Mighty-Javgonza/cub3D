/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closed_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:58:36 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:59:12 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>

static int	check_neighbours_of_line(t_map *map, char **char_line, size_t y)
{
	size_t	x;
	char	current_char;
	int		neighbours_ok;

	x = 0;
	while (**char_line != '\0')
	{
		current_char = get_map_char_at(map, x, y);
		if (ft_ischarset(current_char, "0" MAP_PLAYER_DIRECTIONS))
		{
			neighbours_ok = char_has_valid_neighbours(map, x, y);
			if (neighbours_ok != 1)
				return (0);
		}
		x++;
		(*char_line)++;
	}
	return (1);
}

int	closed_map(t_map *map)
{
	t_list		*line;
	char		*char_line;
	size_t		y;
	int			neighbours_ok;

	line = map->world_buffer;
	y = 0;
	neighbours_ok = 1;
	while (line != NULL)
	{
		char_line = line->content;
		if (check_neighbours_of_line(map, &char_line, y) == 0)
			return (0);
		line = line->next;
		y++;
	}
	return (1);
}
