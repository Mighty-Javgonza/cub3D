/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_times_float.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:45:43 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:53 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

t_vector	vector_times_float(t_vector v, float mult)
{
	t_vector	result;

	result.x = v.x * mult;
	result.y = v.y * mult;
	return (result);
}
