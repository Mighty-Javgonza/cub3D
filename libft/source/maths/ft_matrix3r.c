/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix3r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:21:48 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:14:30 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Defines a 3x3 matrix taking rows as inputs
*/

#include "libft_math.h"

t_matrix3	ft_matrix3r(t_vector r1, t_vector r2, t_vector r3)
{
	t_matrix3	rvalue;

	rvalue.iloc = ft_vector(r1.x, r2.x, r3.x);
	rvalue.jloc = ft_vector(r1.y, r2.y, r3.y);
	rvalue.kloc = ft_vector(r1.z, r2.z, r3.z);
	return (rvalue);
}
