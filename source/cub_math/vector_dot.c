/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_dot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:21:17 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:53 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

float	vector_dot(t_vector v1, t_vector v2)
{
	float	product;

	product = v1.x * v2.x + v1.y * v2.y;
	return (product);
}
