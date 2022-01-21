/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_xl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:39:39 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:10:18 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_conv_xl(t_all_types data, int length)
{
	char		*rvalue;
	t_ullint	value;

	if (length == 1)
		value = (t_ullint)data.ul;
	else if (length == 2)
		value = (t_ullint)data.ull;
	else if (length == -1)
		value = (t_ullint)data.us;
	else
		value = data.u;
	rvalue = ft_utoa_base(value, 16);
	return (rvalue);
}
