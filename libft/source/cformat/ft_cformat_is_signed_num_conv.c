/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_is_signed_num_conv.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:43:00 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/08 13:44:50 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Tells if a conversion is of numeric signed type
*/

int	ft_cformat_is_signed_num_conv(int conv)
{
	if (conv == 3 || conv == 4)
		return (1);
	if (conv >= 10 && conv <= 12)
		return (1);
	return (0);
}
