/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_is_num_conv.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:27:21 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/08 13:29:32 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Tells if a conversion is of numeric type
*/

int	ft_cformat_is_num_conv(int conv)
{
	if (conv >= 2 && conv <= 7)
		return (1);
	if (conv >= 10 && conv <= 12)
		return (1);
	return (0);
}
