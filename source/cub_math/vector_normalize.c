/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_normalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:10:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 16:11:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

t_vector	vector_normalize(t_vector v)
{
	t_vector	normal;
	float		vlength;
	
	vlength = vector_length(v);
	normal.x = v.x / vlength;
	normal.y = v.y / vlength;
	return (normal);
}
