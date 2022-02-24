/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_segment_vector_vfirst.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:07:51 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:51 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

t_segment	sub_segment_vector_vfirst(t_segment s, t_vector v)
{
	t_segment	segment;

	segment.p1 = sub_vectors(v, s.p1);
	segment.p2 = sub_vectors(v, s.p2);
	return (segment);
}
