/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:42:45 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 12:57:49 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

void	parse_color(t_map *map, char *color_line)
{
	unsigned int	color;

	if (color_line[0] != 'F' && color_line[0] != 'C')
		exit(-1); // TODO LIBERAAAAAR
	color = cub_load_color(color_line + 2);
	if (color_line[0] == 'F')
		map->floor_color = color;
	else
		map->ceiling_color = color;
}
