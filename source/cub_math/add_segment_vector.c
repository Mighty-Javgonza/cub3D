/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_pos_to_segment.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:49:01 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 11:52:38 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

t_segment	add_segment_vector(t_segment segment, t_vector pos)
{
	t_segment	result;

	result.p1 = add_vectors(segment.p1, pos);
	result.p2 = add_vectors(segment.p2, pos);
	return (result);
}
