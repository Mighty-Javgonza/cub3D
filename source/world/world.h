/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:34:20 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 11:59:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORLD_H
# define WORLD_H

#include "../wall/wall.h"
#include "../../libft/libft.h"
#include "../player/player.h"

typedef struct s_world
{
	t_wall			*walls;
	size_t			wall_count;
	t_player		player;
	unsigned int	floor_color;
	unsigned int	ceiling_color;
}				t_world;


t_world	init_world();
void	add_wall(t_world *world, t_vector wall_pos);

void	assign_default_textures(t_world *w, t_graphic_image **images);
void assign_parent_to_colliders(t_world *w);

void	add_list_of_wall(t_world *w, t_list *coordinate_walls);
void	destroy_walls(t_world *world);
void	destroy_world(t_world *world);


#endif
