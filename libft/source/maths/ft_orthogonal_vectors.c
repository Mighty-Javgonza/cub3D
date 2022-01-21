/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orthogonal_vectors.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:18:23 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/27 12:02:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"
#include "geometry.h"

/*
** iloc: vector pointing to the right
** jloc: vector pointing down
*/

t_matrix3	ft_orthogonal_vectors(t_vector vector, double tilt)
{
	t_matrix3	rvalue;
	t_vector	iloc;
	t_vector	jloc;

	if (vector.z == 0)
	{
		vector.z = 0.0000000001;
	}
	iloc.x = vector.z;
	iloc.y = tilt;
	iloc.z = (-(vector.z * vector.x) - (vector.y * tilt)) / vector.z;
	iloc = ft_unit_vector(iloc);
	jloc = ft_neg_v(ft_vcross(iloc, vector));
	rvalue = ft_matrix3(iloc, jloc, vector);
	return (rvalue);
}
