/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_v.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:40:39 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:40:45 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "geometry.h"
#include "libft_math.h"

/*
** Returns a vector with abs applied to all of it's components
*/

t_vector	ft_abs_v(t_vector vector)
{
	t_vector	rvalue;

	rvalue.x = ft_abs_d(vector.x);
	rvalue.y = ft_abs_d(vector.y);
	rvalue.z = ft_abs_d(vector.z);
	return (rvalue);
}
