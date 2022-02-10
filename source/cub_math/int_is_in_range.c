/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_is_range.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:46:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 18:38:52 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

int	int_is_in_range(int bound1, int bound2, int value)
{
	int	upper_bound;
	int	lower_bound;

	if (bound1 > bound2)
	{
		upper_bound = bound1;
		lower_bound = bound2;
	}
	else
	{
		upper_bound = bound2;
		lower_bound = bound1;
	}
	if (lower_bound <= value && value <= upper_bound)
		return (1);
	return (0);
}
