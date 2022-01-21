/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dist.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:28:52 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:28:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

/*
** Distance between two points
*/

double	ft_dist(t_point p1, t_point p2)
{
	double	rvalue;
	double	dx;
	double	dy;
	double	dz;

	dx = p2.x - p1.x;
	dy = p2.y - p1.y;
	dz = p2.z - p1.z;
	rvalue = sqrt(dx * dx + dy * dy + dz * dz);
	return (rvalue);
}
