/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world_shaper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:13:17 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/10 16:32:34 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>

void	world_shaper(t_world *world, t_map *map)
{
	t_list	*map_line;
	char	*char_line;
	int		x;
	int		y;
	char	c;

	map_line = map->world_buffer;
	y = 0;
	while (map_line != NULL)
	{
		char_line = (char*)map_line->content;
		x = 0;
		while (*char_line != '\0')
		{
			c = get_map_char_at(map, x, y);
			if (c == '1')
				add_wall(world, (t_vector){x, y});
			else if (c == 'W')
			{
				world->player.cam.pos = (t_vector){x, y};
				world->player.cam.direction = (t_vector){-1, 0};
			} //TODO Mas direcciones
			char_line++;
			x++;
		}
		map_line = map_line->next;
		y++;
	}
}
