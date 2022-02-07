/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proportion_between.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:22:23 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 10:38:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"
#include <stdio.h>

float	proportion_between(float low_bound, float up_bound, float value)
{
	float	proportion;
	float	size;

	size = up_bound - low_bound;
	proportion = (value - low_bound) / size;
	return (proportion);
}
