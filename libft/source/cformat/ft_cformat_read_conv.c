/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read_conv.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:12:19 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:19:47 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

/*
** Returns the code of the converter from a char * to a format block
*/

int	ft_cformat_read_conv(char *bformat)
{
	char c;

	c = *ft_strcharset(bformat, CONV_SET);
	return (ft_strchr(CONV_SET, c) - CONV_SET);
}
