/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vmult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:06:05 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:15:48 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns a vector resulting of the multiplication
** of a vector by a scaling factor
*/

#include "libft_math.h"

t_vector	ft_vmult(t_vector v, double sf)
{
	t_vector	rvalue;

	rvalue.x = v.x * sf;
	rvalue.y = v.y * sf;
	rvalue.z = v.z * sf;
	return (rvalue);
}
