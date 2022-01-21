/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:35:10 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/14 11:25:57 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_conv_p(t_all_types data, int length)
{
	char	*rvalue;
	char	*mrk;

	if (length != 0)
		length = 0;
	mrk = ft_utoa_base(data.ull, 16);
	rvalue = ft_strjoin("0x", mrk);
	free(mrk);
	return (rvalue);
}
