/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:22:02 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/11 12:41:52 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

char	*ft_conv_c(t_all_types data, int length)
{
	char		*rvalue;
	char		c;

	rvalue = malloc(sizeof(char) * 2);
	if (length == 1)
		c = (char)(data.si);
	else
		c = data.c;
	rvalue[0] = c;
	rvalue[1] = 0;
	return (rvalue);
}
