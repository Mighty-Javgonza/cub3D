/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bound_collider.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:20:12 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 14:50:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bound_collider.h"

t_bound_collider	init_bound_collider(size_t segment_count)
{
	t_bound_collider	bc;

	bc.pos = (t_vector){0, 0};
	bc.segment_count = segment_count;
	bc.segments = malloc(sizeof(*bc.segments) * segment_count);
	if (!bc.segments)
		exit(-1); // .TODO Hacer funcion que ponga mensaje de error y salga 
	return (bc);
}
