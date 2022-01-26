/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bound_collider.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:13:24 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 11:43:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOUND_COLLIDER_H
# define BOUND_COLLIDER_H

#include <stdlib.h>
#include "../cub_math/cub_math.h"

typedef struct s_bound_collider
{
	size_t		segment_count;
	t_segment	*segments;
	t_vector		pos;
}				t_bound_collider;


t_bound_collider	init_bound_collider(size_t segment_count);

t_segment	get_bound_collider_segment_in_world(t_bound_collider *bc, size_t index);
#endif
