/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:44:12 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 13:12:44 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <fcntl.h>
#include <sys/stat.h>

void	open_map(t_map *map)
{
	map->fd = open(map->path, O_RDONLY);
	if (map->fd < 0)
		map->valid = 0;
	else
		map->valid = 1;
}
