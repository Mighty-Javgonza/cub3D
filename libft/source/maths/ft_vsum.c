/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:08:52 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:16:02 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Returns the sum of 2 given vectors
*/

t_vector	ft_vsum(t_vector v1, t_vector v2)
{
	t_vector	rvalue;

	rvalue.x = v1.x + v2.x;
	rvalue.y = v1.y + v2.y;
	rvalue.z = v1.z + v2.z;
	return (rvalue);
}
