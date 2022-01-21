/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:34:16 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 10:49:52 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Length doesn't matter but we must keep that prototype
*/

char	*ft_conv_s(t_all_types data, int length)
{
	if (length != 0)
		length = 0;
	if (data.p == 0)
		return (ft_strdup("(null)"));
	return (ft_strdup(data.p));
}
