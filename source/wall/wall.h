/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:07:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 15:31:57 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WALL_H
# define WALL_H

# define DEFAULT_WALL_WIDTH 1
# define DEFAULT_WALL_HEIGHT 1

#include "../cub_math/cub_math.h"

typedef struct s_wall
{
	float		width;
	float		height;
	t_vector	pos;
}				t_wall;

t_wall	init_wall();

#endif
