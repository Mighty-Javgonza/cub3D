/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:39:39 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:14:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_conv_u(t_all_types data, int length)
{
	t_ullint	value;

	if (length == 1)
		value = (t_ullint)data.ul;
	else if (length == 2)
		value = (t_ullint)data.ull;
	else if (length == -1)
		value = (t_ullint)data.us;
	else
		value = (t_ullint)(data.u);
	return (ft_utoa_base(value, 10));
}
