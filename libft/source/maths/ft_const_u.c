/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_const_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:51:59 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/30 09:59:59 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

/*
** Constrains unsigned int value between the 2 given bounds
*/

unsigned int	ft_const_u(unsigned int value, \
		unsigned int lbound, unsigned ubound)
{
	if (value > ubound)
		return (ubound);
	if (value < lbound)
		return (lbound);
	return (value);
}