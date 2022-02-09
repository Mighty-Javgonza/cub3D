/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_world_lines.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:18:10 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 15:52:11 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>

void	parse_world_lines(t_map *map)
{
	int		is_valid_line;
	char	*line;

	is_valid_line = get_next_line(map->fd, &line);
	while (is_valid_line == 1)
	{
		parse_world_line(map, line);
		is_valid_line = get_next_line(map->fd, &line);
	}
}
