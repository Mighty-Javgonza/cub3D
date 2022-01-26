/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:07:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 11:43:14 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WALL_H
# define WALL_H

# define DEFAULT_WALL_WIDTH 1
# define DEFAULT_WALL_HEIGHT 1
# define WALL_SEGMENT_COUNT 4

#include "../cub_math/cub_math.h"
#include "../bound_collider/bound_collider.h"

typedef struct s_wall
{
	float				width;
	float				height;
	t_bound_collider	col;
}				t_wall;

t_wall	init_wall();


void	calculate_wall_segments(t_wall *wall);
#endif
