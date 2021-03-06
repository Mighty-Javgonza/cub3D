/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_world_lines.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:18:10 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:01:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>
#include "../error/error.h"

void	parse_world_lines(t_map *map)
{
	int		is_valid_line;
	char	*line;

	is_valid_line = get_next_line(map->fd, &line);
	if (is_valid_line == 0)
		exit_and_message("No map detected\n");
	while (is_valid_line == 1)
	{
		parse_world_line(map, line);
		if (!map->valid)
			exit_and_message("Invalid chars detected on map\n");
		is_valid_line = get_next_line(map->fd, &line);
	}
	free(line);
}
