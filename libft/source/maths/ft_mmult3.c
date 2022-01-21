/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mmult3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:23:11 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:24:48 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Multiplies a 3x3 matrix by another
** IMPORTANT: Remember that multiplication goes right to left
*/

t_matrix3	ft_mmult3(t_matrix3 m1, t_matrix3 m2)
{
	t_matrix3	rvalue;

	rvalue.iloc = ft_apply_matrix3(m1.iloc, m2);
	rvalue.jloc = ft_apply_matrix3(m1.jloc, m2);
	rvalue.kloc = ft_apply_matrix3(m1.kloc, m2);
	return (rvalue);
}
