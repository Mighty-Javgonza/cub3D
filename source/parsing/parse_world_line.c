/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_world_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:59:54 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 15:52:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

void	parse_world_line(t_map *map, char *line)
{
	if (map->world_buffer == 0)
		map->world_buffer = ft_lstnew(line);
	else
		ft_lstput_back(&map->world_buffer, line);
	if (validate_world_line(line) == 0)
		map->valid = 0;
	else
		map->valid = 1;
}
