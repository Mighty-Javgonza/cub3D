/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bound_collider.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:13:24 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:26:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOUND_COLLIDER_H
# define BOUND_COLLIDER_H

# include <stdlib.h>
# include "../cub_math/cub_math.h"

typedef struct s_wall	t_wall;

typedef struct s_bound_collider
{
	size_t		segment_count;
	t_segment	*segments;
	t_vector	pos;
	float		z_axis_height;
	float		z_axis_pos;
	t_wall		*parent_wall;
}				t_bound_collider;

t_bound_collider	init_bound_collider(size_t segment_count);
t_segment			get_bound_collider_segment_in_world(t_bound_collider *bc,
						size_t index);
void				destroy_bound_collider(t_bound_collider *col);

#endif
