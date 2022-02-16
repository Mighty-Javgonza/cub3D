/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:08:36 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 18:47:01 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
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

void	parse_map(t_map *map, t_graphic_environment *ge)
{
	int		i;
	char	*line;

	i = 0;
	open_map(map);
	if (!map->valid)
		exit_and_message("Couldn't open map\n");
	while (i < 4)
	{
		if (get_next_line(map->fd, &line) == 0)
			exit_and_message("Empy map\n");
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
	if (all_textures_parsed(map) == 0)
		exit_and_message("Error on textures\n");
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
