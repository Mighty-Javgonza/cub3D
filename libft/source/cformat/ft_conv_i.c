/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:38:43 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/14 11:57:39 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_conv_i(t_all_types data, int length)
{
	long long int	value;

	if (length == 1)
		value = (long long int)data.li;
	else if (length == 2)
		value = (long long int)data.lli;
	else if (length == -1)
		value = (long long int)data.si;
	else
		value = (long long int)data.i;
	return (ft_itoa_base(value, 10));
}
