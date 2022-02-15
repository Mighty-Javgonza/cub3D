/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:08:36 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 13:29:35 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

void	parse_map(t_map *map, t_graphic_environment *ge)
{
	int		i;
	char	*line;

	i = 0;
	open_map(map);
	while (i < 4)
	{
		get_next_line(map->fd, &line);
		if (ft_strlen(line) == 0)
		{
			free(line);
			continue ;
		}
		parse_texture(map, ge, line);
		free(line);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		get_next_line(map->fd, &line);
		if (ft_strlen(line) == 0)
		{
			free(line);
			continue ;
		}
		parse_color(map, line);
		free(line);
		i++;
	}
	parse_world_lines(map);
}
