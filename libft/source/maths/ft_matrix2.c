/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:26:04 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:13:53 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Creates a 2 x 2 matrix
*/

t_matrix2	ft_matrix2(double a, double b, double c, double d)
{
	t_matrix2	rvalue;

	rvalue.a = a;
	rvalue.b = b;
	rvalue.c = c;
	rvalue.d = d;
	return (rvalue);
}
