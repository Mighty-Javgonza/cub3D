/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read_length.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:06:52 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:21:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

static int	add_length_char(int current_value, char new)
{
	if (new == LENGTH_SET[0])
		return (current_value - 1);
	else if (new == LENGTH_SET[1])
		return (current_value + 1);
	return (current_value);
}

/*
** Returns the length code from a char * to a block format
*/

int			ft_cformat_read_length(char *bformat)
{
	char	*ptr;
	int		rvalue;

	rvalue = 0;
	ptr = ft_strcharset(bformat, LENGTH_SET);
	if (ptr == 0)
		return (rvalue);
	while (ft_ischarset(*ptr, LENGTH_SET))
	{
		rvalue = add_length_char(rvalue, *ptr);
		ptr++;
	}
	rvalue = ft_const_i(rvalue, -2, 2);
	return (rvalue);
}
