/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_texture.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:57:47 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:01:11 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>
#include "../error/error.h"

void	parse_texture(t_map *map, t_graphic_environment *ge, char *texture_line)
{
	if (ft_strncmp(texture_line, "NO ", 3) == 0)
	{
		map->textures[NORTH_TEXTURE] = graphic_image_from_png(ge,
				texture_line + 3);
		map->parsed_textures[NORTH_TEXTURE] = 1;
	}
	else if (ft_strncmp(texture_line, "SO ", 3) == 0)
	{
		map->textures[SOUTH_TEXTURE] = graphic_image_from_png(ge,
				texture_line + 3);
		map->parsed_textures[SOUTH_TEXTURE] = 1;
	}
	else if (ft_strncmp(texture_line, "EA ", 3) == 0)
	{
		map->textures[EAST_TEXTURE] = graphic_image_from_png(ge,
				texture_line + 3);
		map->parsed_textures[EAST_TEXTURE] = 1;
	}
	else if (ft_strncmp(texture_line, "WE ", 3) == 0)
	{
		map->textures[WEST_TEXTURE] = graphic_image_from_png(ge,
				texture_line + 3);
		map->parsed_textures[WEST_TEXTURE] = 1;
	}
}
