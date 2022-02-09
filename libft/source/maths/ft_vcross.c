/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vcross.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:15:09 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:15:31 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Returns the cross product of two vector3
*/

t_vector	ft_vcross(t_vector v1, t_vector v2)
{
	t_vector	rvalue;

	rvalue.x = v1.y * v2.z - v2.y * v1.z;
	rvalue.y = v1.z * v2.x - v2.z * v1.x;
	rvalue.z = v1.x * v2.y - v2.x * v1.y;
	return (rvalue);
}
