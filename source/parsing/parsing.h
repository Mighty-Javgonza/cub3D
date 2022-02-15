/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:23:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 18:52:11 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

#include "../../libft/libft.h"
#include "../graphics/graphics.h"

# define MAP_PLAYER_DIRECTIONS "NSEW"
# define MAP_WALLS "10"
# define VALID_MAP_CHARS MAP_PLAYER_DIRECTIONS MAP_WALLS " "
# define VALID_NEIGHBOURS "01" MAP_PLAYER_DIRECTIONS

# define NORTH_TEXTURE 3 
# define SOUTH_TEXTURE 1
# define EAST_TEXTURE 2
# define WEST_TEXTURE 0

typedef struct s_map
{
	t_list			*world_buffer;
	char			*path;
	int				fd;
	unsigned int	valid:1;
	unsigned int	floor_color;
	unsigned int	ceiling_color;
	t_graphic_image	textures[4];
	unsigned int	parsed_textures[4];
}				t_map;

t_map	init_map(char *path);
void	open_map(t_map *map);

void	parse_world_line(t_map *map, char *line);

int	validate_world_line(char *line);

void	parse_world_lines(t_map *map);

int	has_player(t_map *map);
void	validate_world(t_map *map);

char	get_map_char_at(t_map *map, int x, int y);
int	char_has_valid_neighbours(t_map *map, int x, int y);
int	closed_map(t_map *map);

void	parse_texture(t_map *map, t_graphic_environment *ge, char *texture_line);

void	world_shaper(t_world *world, t_map *map);

t_color	cub_load_color(char *str);
void	parse_color(t_map *map, char *color_line);

void	parse_map(t_map *map, t_graphic_environment *ge);

void	destroy_map(t_map *map);


int	validate_color(char *color);
#endif
