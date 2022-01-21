/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:14:31 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:14:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

t_vector	ft_vector(double x, double y, double z)
{
	t_vector rvalue;

	rvalue.x = x;
	rvalue.y = y;
	rvalue.z = z;
	return (rvalue);
}
