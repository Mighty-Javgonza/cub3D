/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maddrow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:27:13 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:13:45 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Adds a row to a matrix, a factor can be used to multiply the input
** rowi = row_index
*/

t_matrix3	ft_maddrow(t_matrix3 m, int rowi, t_vector row, double factor)
{
	t_matrix3	rvalue;
	t_vector	row1;
	t_vector	row2;
	t_vector	row3;

	row1 = ft_mrow(m, 0);
	row2 = ft_mrow(m, 1);
	row3 = ft_mrow(m, 2);
	if (rowi == 0)
		row1 = ft_vsum(row1, ft_vmult(row, factor));
	if (rowi == 1)
		row2 = ft_vsum(row2, ft_vmult(row, factor));
	if (rowi == 2)
		row3 = ft_vsum(row3, ft_vmult(row, factor));
	rvalue = ft_matrix3r(row1, row2, row3);
	return (rvalue);
}
