/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vvmult.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:06:49 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:06:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Returns the result of the multiplication of all the vector components
*/

t_vector	ft_vvmult(t_vector v1, t_vector v2)
{
	t_vector	rvalue;

	rvalue.x = v1.x * v2.x;
	rvalue.y = v1.y * v2.y;
	rvalue.z = v1.z * v2.z;
	return (rvalue);
}
