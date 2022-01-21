/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_v.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:20:32 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:21:22 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"

/*
** Returns a vector applying ft_max_d to
** all components of the two given vectors
*/

t_vector	ft_max_v(t_vector v1, t_vector v2)
{
	t_vector	rvalue;

	rvalue.x = ft_max_d(v1.x, v2.x);
	rvalue.y = ft_max_d(v1.y, v2.y);
	rvalue.z = ft_max_d(v1.z, v2.z);
	return (rvalue);
}
