/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read_flags.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:47:48 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:21:17 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

static char	*go_to_flag_start(char *bformat)
{
	char	*ptr;

	if ((ptr = ft_strchr(bformat, SEPARATOR_ARGS)) == 0)
		ptr = bformat;
	else
		ptr++;
	return (ptr);
}

/*
** Accepts a char * to the format block and returns
** the code of the flags
*/

t_uint		ft_cformat_read_flags(char *bformat)
{
	t_uint	rvalue;
	char	*ptr;

	rvalue = 0;
	ptr = go_to_flag_start(bformat);
	while (ft_ischarset(*ptr, FLAG_SET))
	{
		rvalue |= 1 << (ft_strchr(FLAG_SET, *ptr) - FLAG_SET);
		ptr++;
	}
	return (rvalue);
}
