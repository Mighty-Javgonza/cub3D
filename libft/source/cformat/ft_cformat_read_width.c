/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read_width.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:55:35 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:16:08 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

static char	*go_to_width_start(char *bformat)
{
	char *ptr;

	if ((ptr = ft_strchr(bformat, SEPARATOR_ARGS)) == 0)
		ptr = bformat;
	else
		ptr++;
	while (ft_ischarset(*ptr, FLAG_SET))
		ptr++;
	return (ptr);
}

/*
** Accepts a char * to the format block and returns
** the number of chars in width -1 for automatic
** -2 if ARGS_READER (will be overwritten
** in varg read phase)
*/

int			ft_cformat_read_width(char *bformat)
{
	int		rvalue;
	char	*ptr;

	rvalue = 0;
	ptr = go_to_width_start(bformat);
	if (*ptr == ARGS_READER)
		return (-2);
	if (!ft_isdigit(*ptr))
		return (-1);
	return (ft_atoi(ptr));
}
