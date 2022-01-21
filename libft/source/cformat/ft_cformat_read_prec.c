/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read_prec.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:00:44 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/08 12:28:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

/*
** From a char * tho the beginning of a format returns the prec
** -1 for automatic
** -2 if ARGS_READER
*/

int	ft_cformat_read_prec(char *str)
{
	char	*ptr;

	ptr = ft_strchr(str, SEPARATOR_PREC);
	if (ptr == 0)
		return (-1);
	ptr++;
	if (*ptr == ARGS_READER)
		return (-2);
	return (ft_atoi(ptr));
}
