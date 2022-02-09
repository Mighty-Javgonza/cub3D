/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:27:04 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:13:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

/*
** Creates a 3x3 matrix.
** iloc: where the "x" axis lands
** jloc: where the "y" axis lands
** kloc: where the "z" axis lands
*/

t_matrix3	ft_matrix3(t_vector iloc, t_vector jloc, t_vector kloc)
{
	t_matrix3	rvalue;

	rvalue.iloc = iloc;
	rvalue.jloc = jloc;
	rvalue.kloc = kloc;
	return (rvalue);
}
