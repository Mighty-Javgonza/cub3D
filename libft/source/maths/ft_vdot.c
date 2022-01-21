/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:14:42 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:17:39 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

/*
** Returns the dot product of 2 vectors
*/

double	ft_vdot(t_vector v1, t_vector v2)
{
	double rvalue;

	rvalue = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	return (rvalue);
}
