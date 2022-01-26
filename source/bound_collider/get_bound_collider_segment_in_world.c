/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bound_collider_segment_in_world.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:47:05 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 11:53:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bound_collider.h"

t_segment	get_bound_collider_segment_in_world(t_bound_collider *bc, size_t index)
{
	t_segment	segment;

	segment = bc->segments[index];
	segment = add_segment_vector(segment, bc->pos);
	return (segment);
}
