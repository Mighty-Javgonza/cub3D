/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_divided_float.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:15:28 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:52 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

t_vector	vector_divided_float(t_vector v, float div)
{
	t_vector	result;

	result.x = v.x / div;
	result.y = v.y / div;
	return (result);
}
