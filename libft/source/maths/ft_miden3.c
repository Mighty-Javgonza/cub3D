/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_miden3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:20:18 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:14:51 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Returns a 3x3 identity matrix
*/

t_matrix3	ft_miden3(void)
{
	t_matrix3	rvalue;

	rvalue.iloc = ft_vector(1, 0, 0);
	rvalue.jloc = ft_vector(0, 1, 0);
	rvalue.kloc = ft_vector(0, 0, 1);
	return (rvalue);
}
