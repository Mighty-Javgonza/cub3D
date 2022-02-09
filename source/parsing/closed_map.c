/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closed_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:58:36 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 15:54:32 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>

int	closed_map(t_map *map)
{
	t_list	*line;
	char	*char_line;
	char	current_char;
	size_t	y;
	size_t	x;
	int		neighbours_ok;

	line = map->world_buffer;
	y = 0;
	neighbours_ok = 1;
	while (line != NULL)
	{
		char_line = line->content;
		x = 0;
		while (*char_line != '\0')
		{
			x++;
			current_char = get_map_char_at(map, x, y);
			if (ft_ischarset(current_char, "0" MAP_PLAYER_DIRECTIONS))
			{
				neighbours_ok = char_has_valid_neighbours(map, x, y);
				if (neighbours_ok != 1)
					return (0);
			}
			char_line++;
		}
		line = line->next;
		y++;
	}
	return (1);
}
