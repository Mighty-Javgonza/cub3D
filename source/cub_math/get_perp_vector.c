/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_perp_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:54:02 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 15:55:01 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

t_vector	get_perp_vector(t_vector v)
{
	t_vector	result;

	result.x = -v.y;
	result.y = v.x;
	return (result);
}
