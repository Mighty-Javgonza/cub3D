/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdiv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:15:00 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:15:32 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Divides all components of a vector by a value
*/

t_vector	ft_vdiv(t_vector v, double div)
{
	t_vector	rvalue;

	rvalue.x = v.x / div;
	rvalue.y = v.y / div;
	rvalue.z = v.z / div;
	return (rvalue);
}
