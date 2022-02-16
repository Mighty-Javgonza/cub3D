/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpolate_float.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:45:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 12:04:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

float	interpolate_float(float min_val, float max_val,
	size_t step_count, size_t step)
{
	float	result;

	result = (max_val - min_val) / (float)step_count;
	result *= ((float)step + 1);
	result += min_val;
	return (result);
}
