/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_char_at.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:11:43 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 15:22:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

char	get_map_char_at(t_map *map, int x, int y)
{
	t_list	*line;
	char	*char_line;
	char	c;
	int		lst_size;

	lst_size = ft_lstsize(map->world_buffer);
	if (y >= lst_size)
		return ('\0');
	line = ft_lstget(map->world_buffer, y);
	char_line = line->content;
	if (x >= (int)ft_strlen(char_line))
		return ('\0');
	c = char_line[x];
	return (c);
}
