/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_neg_v.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:19:33 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:15:08 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns a vector with all components changed of sign
*/

#include "libft_math.h"

t_vector	ft_neg_v(t_vector v)
{
	t_vector	rvalue;

	rvalue.x = -v.x;
	rvalue.y = -v.y;
	rvalue.z = -v.z;
	return (rvalue);
}
