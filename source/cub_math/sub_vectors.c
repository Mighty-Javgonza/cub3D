/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vectors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:50:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:52 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

t_vector	sub_vectors(t_vector v1, t_vector v2)
{
	t_vector	result;

	result = (t_vector){v1.x - v2.x, v1.y - v2.y};
	return (result);
}
