/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world_shaper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:13:17 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 18:04:46 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>

void	world_shaper(t_world *world, t_map *map)
{
	t_list	*map_line;
	char	*char_line;
	int		x;
	int		y;
	char	c;

	world->floor_color = map->floor_color;
	world->ceiling_color = map->ceiling_color;
	world->wall_textures = malloc(sizeof(**world->wall_textures) * 4);
	world->wall_textures[NORTH_TEXTURE] = malloc(sizeof(**world->wall_textures));
	*(world->wall_textures[NORTH_TEXTURE]) = map->textures[NORTH_TEXTURE];
	world->wall_textures[EAST_TEXTURE] = malloc(sizeof(**world->wall_textures));
	*(world->wall_textures[EAST_TEXTURE]) = map->textures[EAST_TEXTURE];
	world->wall_textures[WEST_TEXTURE] = malloc(sizeof(**world->wall_textures));
	*(world->wall_textures[WEST_TEXTURE]) = map->textures[WEST_TEXTURE];
	world->wall_textures[SOUTH_TEXTURE] = malloc(sizeof(**world->wall_textures));
	*(world->wall_textures[SOUTH_TEXTURE]) = map->textures[SOUTH_TEXTURE];
	map_line = map->world_buffer;
	y = 0;
	while (map_line != NULL)
	{
		char_line = (char*)map_line->content;
		x = 0;
		while (*char_line != '\0')
		{
			c = get_map_char_at(map, x, y);
			if (c == '1')
				add_wall(world, (t_vector){x, y});
			else if (c == 'W')
			{
				world->player.cam.pos = (t_vector){x, y};
				world->player.cam.direction = (t_vector){-1, 0};
			}
			else if (c == 'N')
			{
				world->player.cam.pos = (t_vector){x, y};
				world->player.cam.direction = (t_vector){0, -1};
			}
			else if (c == 'S')
			{
				world->player.cam.pos = (t_vector){x, y};
				world->player.cam.direction = (t_vector){0, 1};
			}
			else if (c == 'E')
			{
				world->player.cam.pos = (t_vector){x, y};
				world->player.cam.direction = (t_vector){1, 0};
			}
			char_line++;
			x++;
		}
		map_line = map_line->next;
		y++;
	}


}
