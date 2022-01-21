/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unit_vector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:16:29 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:18:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

/*
** Returns a vector of length 1 with same direction
*/

t_vector	ft_unit_vector(t_vector vector)
{
	double		dist;
	t_point		p1;
	t_point		p2;
	t_vector	rvalue;

	p1.x = 0;
	p1.y = 0;
	p1.z = 0;
	p2 = (t_point)(vector);
	dist = ft_dist(p1, p2);
	rvalue.x = vector.x / dist;
	rvalue.y = vector.y / dist;
	rvalue.z = vector.z / dist;
	return (rvalue);
}
