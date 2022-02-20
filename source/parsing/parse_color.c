/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:42:45 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 19:07:49 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>
#include "../error/error.h"

void	parse_color(t_map *map, char *color_line)
{
	unsigned int	color;

	if (color_line[0] != 'F' && color_line[0] != 'C')
		exit_and_message("That is not a color\n");
	color = cub_load_color(color_line + 2);
	if (color_line[0] == 'F')
	{
		map->parsed_colors[0] = 1;
		map->floor_color = color;
	}
	else
	{
		map->parsed_colors[1] = 1;
		map->ceiling_color = color;
	}
}
