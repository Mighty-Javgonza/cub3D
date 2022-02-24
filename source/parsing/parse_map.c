/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:08:36 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 13:13:30 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "../../libft/libft.h"
#include "../error/error.h"

static void	parse_texture_or_parse_color(t_map *map, char *line,
				t_graphic_environment *ge)
{
	if (line[0] == 'F' || line[0] == 'C')
		parse_color(map, line);
	else
		parse_texture(map, ge, line);
}

void	parse_map(t_map *map, t_graphic_environment *ge)
{
	int		i;
	char	*line;
	int		control;

	i = 0;
	open_map(map);
	if (!map->valid)
		exit_and_message("Couldn't open map\n");
	while (i < 6)
	{
		control = get_next_line(map->fd, &line);
		if (control == 0)
			exit_and_message("Incomplete map\n");
		if (ft_strlen(line) == 0)
		{
			free(line);
			continue ;
		}
		parse_texture_or_parse_color(map, line, ge);
		free(line);
		i++;
	}
	close_map_or_exit_if_error(map);
}
