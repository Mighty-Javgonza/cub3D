/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:30:23 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:13:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"
#include <stdio.h>

/*
** Transforms a char* into double
** Format 981.3285
*/

static double	get_abs(char *ptr)
{
	double	int_part;
	double	dec_part;

	int_part = 0;
	dec_part = 0;
	while (*ptr != '.' && *ptr != '\0')
	{
		int_part = int_part * 10;
		int_part += *ptr - '0';
		ptr++;
	}
	if (*ptr == '\0')
	{
		return (int_part);
	}
	while (*ptr != '\0')
		ptr++;
	ptr--;
	while (*ptr != '.')
	{
		dec_part += *ptr - '0';
		dec_part = dec_part / 10;
		ptr--;
	}
	return (dec_part + int_part);
}

double			ft_atod(const char *d)
{
	double	int_part;
	double	dec_part;
	char	*ptr;
	int		sign;

	ptr = (char *)d;
	int_part = 0;
	dec_part = 0;
	sign = 1;
	if (*ptr == '-')
	{
		sign = -1;
		ptr++;
	}
	return (get_abs(ptr) * sign);
}
