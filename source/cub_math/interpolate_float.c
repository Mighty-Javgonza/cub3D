/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpolate_float.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:45:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 15:52:47 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"
#include <stdio.h>

float	interpolate_float(float min_val, float max_val,
	size_t step_count, size_t step)
{
	float	result;
	float	step_size;
	float	val;

	step_size = (max_val - min_val) / (float)step_count;
	val = step_size * ((float)step + 1);
	result = val + min_val;
	return (result);
}
