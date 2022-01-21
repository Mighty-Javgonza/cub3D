/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_darr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:00:29 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:00:35 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_sorting.h"
#include <stdio.h>

/*
** Returns the index of the min from double[length]
*/

size_t	ft_min_darr(double *values, size_t length)
{
	double	min;
	size_t	rvalue;

	length--;
	min = values[length];
	rvalue = length;
	while (length > 0)
	{
		length--;
		if (values[length] < min)
		{
			min = values[length];
			rvalue = length;
		}
	}
	return (rvalue);
}
