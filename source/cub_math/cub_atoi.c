/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:46:38 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

int	cub_atoi(char *str)
{
	int	value;
	int	sign;

	if (str[0] == '-')
	{
		sign = -1;
		str++;
	}
	else
	{
		sign = 1;
	}
	value = 0;
	while (*str != '\0')
	{
		value *= 10;
		value += (str[0] - '0') * sign;
		str++;
	}
	return (value);
}
