/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:25:51 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 18:35:31 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

void	destroy_map(t_map *map)
{
	t_list	*tmp;

	if (map->fd > 0)
		close(map->fd);
	tmp = map->world_buffer;
	while (map->world_buffer != NULL)
	{
		tmp = map->world_buffer->next;
		free(map->world_buffer->content);
		free(map->world_buffer);
		map->world_buffer = tmp;
	}
}
