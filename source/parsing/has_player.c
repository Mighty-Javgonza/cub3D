/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_player.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:40:32 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:00:12 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "../../libft/libft.h"

int	has_player(t_map *map)
{
	char	*player_loc;
	t_list	*current_line;
	int		player_counter;

	player_counter = 0;
	current_line = map->world_buffer;
	while (current_line != NULL)
	{
		player_loc = ft_strcharset(
				current_line->content, MAP_PLAYER_DIRECTIONS);
		if (player_loc != NULL)
			player_counter++;
		current_line = current_line->next;
	}
	return (player_counter);
}
