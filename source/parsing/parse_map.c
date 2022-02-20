/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:08:36 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 19:09:28 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>
#include "../error/error.h"

static int	all_textures_parsed(t_map *map)
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

static int	all_colors_parsed(t_map *map)
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

static void	exit_if_textures_and_colors_not_parsed(t_map *map)
{
	if (all_textures_parsed(map) == 0)
		exit_and_message("Error on textures\n");
	if (all_colors_parsed(map) == 0)
		exit_and_message("Error on colors\n");
}

void	parse_map(t_map *map, t_graphic_environment *ge)
{
	int		i;
	char	*line;

	i = 0;
	open_map(map);
	if (!map->valid)
		exit_and_message("Couldn't open map\n");
	while (i < 6)
	{
		get_next_line(map->fd, &line);
		if (ft_strlen(line) == 0)
		{
			free(line);
			continue ;
		}
		if (line[0] == 'F' || line[0] == 'C')
			parse_color(map, line);
		else
			parse_texture(map, ge, line);
		free(line);
		i++;
	}
	exit_if_textures_and_colors_not_parsed(map);
	parse_world_lines(map);
}
