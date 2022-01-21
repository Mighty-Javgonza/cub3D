/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfloat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 12:47:18 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/25 13:20:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_isfunctions.h"

/*
** Check if a char * is a sequence of numbers with a dot (or without it)
*/

int	ft_isfloat(char *f)
{
	char	*ptr;
	char	dotted;

	ptr = f;
	dotted = 0;
	if (*ptr == '-')
		ptr++;
	while (*ptr != '\0')
	{
		if (!ft_isdigit(*ptr) && (*ptr != '.' && !dotted))
			return (0);
		if (*ptr == '.')
			dotted = 1;
		ptr++;
	}
	return (1);
}
