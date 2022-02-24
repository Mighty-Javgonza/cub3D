/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world_shaper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:13:17 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 17:29:08 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>
#include "../world/world.h"

static void	allocate_textures(t_world *world, t_map *map)
{
	world->wall_textures = malloc(sizeof(**world->wall_textures) * 4);
	world->wall_textures[NORTH_TEXTURE]
		= malloc(sizeof(**world->wall_textures));
	*(world->wall_textures[NORTH_TEXTURE]) = map->textures[NORTH_TEXTURE];
	world->wall_textures[EAST_TEXTURE]
		= malloc(sizeof(**world->wall_textures));
	*(world->wall_textures[EAST_TEXTURE]) = map->textures[EAST_TEXTURE];
	world->wall_textures[WEST_TEXTURE]
		= malloc(sizeof(**world->wall_textures));
	*(world->wall_textures[WEST_TEXTURE]) = map->textures[WEST_TEXTURE];
	world->wall_textures[SOUTH_TEXTURE]
		= malloc(sizeof(**world->wall_textures));
	*(world->wall_textures[SOUTH_TEXTURE]) = map->textures[SOUTH_TEXTURE];
}

static void	add_char_to_map(t_world *world, char c, t_vector v)
{
	if (c == '1')
		add_wall(world, v);
	else if (c == 'W')
	{
		world->player.cam.pos = v;
		world->player.cam.direction = (t_vector){-1, 0};
	}
	else if (c == 'N')
	{
		world->player.cam.pos = v;
		world->player.cam.direction = (t_vector){0, -1};
	}
	else if (c == 'S')
	{
		world->player.cam.pos = v;
		world->player.cam.direction = (t_vector){0, 1};
	}
	else if (c == 'E')
	{
		world->player.cam.pos = v;
		world->player.cam.direction = (t_vector){1, 0};
	}
}

void	world_shaper(t_world *world, t_map *map)
{
	t_list	*map_line;
	char	*char_line;
	int		x;
	int		y;
	char	c;

	world->floor_color = map->floor_color;
	world->ceiling_color = map->ceiling_color;
	allocate_textures(world, map);
	map_line = map->world_buffer;
	y = 0;
	while (map_line != NULL)
	{
		char_line = (char *)map_line->content;
		x = 0;
		while (*char_line != '\0')
		{
			c = get_map_char_at(map, x, y);
			add_char_to_map(world, c, (t_vector){x, y});
			char_line++;
			x++;
		}
		map_line = map_line->next;
		y++;
	}
}
