/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read_arg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:41:51 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:19:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

/*
** Accepts a char * to the format block and returns
** the number before SEPARATOR_ARGS
*/

int	ft_cformat_read_arg(char *bformat)
{
	if (ft_strchr(bformat, SEPARATOR_ARGS) == 0)
		return (-1);
	return (ft_atoi(bformat));
}
