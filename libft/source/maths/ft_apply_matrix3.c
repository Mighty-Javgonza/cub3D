/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_matrix3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:39:15 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:40:57 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

/*
** Applies the linear transformation defined by the input matrix3 to a vector
*/

t_vector	ft_apply_matrix3(t_vector vector, t_matrix3 matrix)
{
	t_vector	rvalue;

	rvalue.x = vector.x * matrix.iloc.x;
	rvalue.y = vector.x * matrix.iloc.y;
	rvalue.z = vector.x * matrix.iloc.z;
	rvalue.x += vector.y * matrix.jloc.x;
	rvalue.y += vector.y * matrix.jloc.y;
	rvalue.z += vector.y * matrix.jloc.z;
	rvalue.x += vector.z * matrix.kloc.x;
	rvalue.y += vector.z * matrix.kloc.y;
	rvalue.z += vector.z * matrix.kloc.z;
	return (rvalue);
}
