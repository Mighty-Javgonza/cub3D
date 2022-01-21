/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vpointto.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:14:48 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:14:49 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Returns a unit vector pointing from a point to another
*/

t_vector	ft_vpointto(t_point p1, t_point p2)
{
	t_vector	rvalue;
	t_point		diff;

	diff = ft_vsub(p2, p1);
	rvalue = ft_unit_vector(diff);
	return (rvalue);
}
