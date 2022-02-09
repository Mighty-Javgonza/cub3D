/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mrow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:20:01 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:15:00 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Returns a vector representing the row of the matrix
*/

t_vector	ft_mrow(t_matrix3 m, int row)
{
	t_vector	rvalue;

	if (row == 0)
	{
		rvalue.x = m.iloc.x;
		rvalue.y = m.jloc.x;
		rvalue.z = m.kloc.x;
	}
	if (row == 1)
	{
		rvalue.x = m.iloc.y;
		rvalue.y = m.jloc.y;
		rvalue.z = m.kloc.y;
	}
	if (row == 2)
	{
		rvalue.x = m.iloc.z;
		rvalue.y = m.jloc.z;
		rvalue.z = m.kloc.z;
	}
	return (rvalue);
}
