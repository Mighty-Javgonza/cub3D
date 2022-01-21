/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_xu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:42:18 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/15 09:51:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_conv_xu(t_all_types data, int length)
{
	char		*rvalue;
	t_ullint	value;

	if (length == 1)
		value = (t_ullint)(data.ul);
	else if (length == 2)
		value = (t_ullint)(data.ull);
	else if (length == -1)
		value = (t_ullint)(data.us);
	else
		value = (t_ullint)(data.u);
	rvalue = ft_utoa_base(value, 16);
	ft_strtoupper(rvalue);
	return (rvalue);
}
