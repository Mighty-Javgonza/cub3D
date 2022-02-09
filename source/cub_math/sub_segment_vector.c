/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_segment_vector.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:05:30 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 20:08:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

t_segment	sub_segment_vector(t_segment s, t_vector v)
{
	t_segment	segment;

	segment.p1 = sub_vectors(s.p1, v);
	segment.p2 = sub_vectors(s.p2, v);
	return (segment);
}
