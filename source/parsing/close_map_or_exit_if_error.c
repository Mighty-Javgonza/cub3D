/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_map_or_exit_if_error.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:18:11 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:20:34 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "../error/error.h"

void	close_map_or_exit_if_error(t_map *map)
{
	exit_if_textures_and_colors_not_parsed(map);
	parse_world_lines(map);
	validate_world(map);
	close(map->fd);
	if (map->valid == 0)
		exit_and_message("World invalid\n");
}
