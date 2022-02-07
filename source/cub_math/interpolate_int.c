/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpolate_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:43:28 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 12:03:58 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

int	interpolate_int(int min_val, int max_val, size_t step_count, size_t step)
{
	int		result;
	float	step_size;
	float	val;

	step_size = ((float)max_val - (float)min_val) / (float)step_count;
	val = step_size * ((float)step + 1);
	result = val + min_val;
	return (result);
}
