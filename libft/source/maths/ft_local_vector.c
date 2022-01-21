/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_local_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:26:48 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:28:33 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

/*
** Puts a vector (represented in x=(1,0,0) y=(0,1,0) z=(0,0,1))
** in another coordinate system
** The matrix is the coordinates where x,y,z land
*/

t_vector	ft_local_vector(t_vector v, t_matrix3 m)
{
	t_vector	rvalue;

	rvalue.x = ft_vdot(v, m.iloc);
	rvalue.y = ft_vdot(v, m.jloc);
	rvalue.z = ft_vdot(v, m.kloc);
	return (rvalue);
}
