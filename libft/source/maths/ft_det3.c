/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_det3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:29:24 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:29:44 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Computes the determinant of a 3x3 matrix
*/

double	ft_det3(t_matrix3 m)
{
	double	rvalue;

	rvalue = m.iloc.x * m.jloc.y * m.kloc.z;
	rvalue += m.iloc.y * m.jloc.z * m.kloc.x;
	rvalue += m.iloc.z * m.jloc.x * m.kloc.y;
	rvalue -= m.iloc.z * m.jloc.y * m.kloc.x;
	rvalue -= m.iloc.x * m.jloc.z * m.kloc.y;
	rvalue -= m.iloc.y * m.jloc.x * m.kloc.z;
	return (rvalue);
}
