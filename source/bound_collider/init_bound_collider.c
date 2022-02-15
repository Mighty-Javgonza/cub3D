/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bound_collider.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:20:12 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 14:59:32 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bound_collider.h"
#include "../error/error.h"

t_bound_collider	init_bound_collider(size_t segment_count)
{
	t_bound_collider	bc;

	bc.pos = (t_vector){0, 0};
	bc.segment_count = segment_count;
	bc.segments = malloc(sizeof(*bc.segments) * segment_count);
	bc.parent_wall = NULL;
	bc.z_axis_height = 1;
	bc.z_axis_pos = 0;
	if (!bc.segments)
		exit_and_message("Couldn't allocate segment\n");
	return (bc);
}
