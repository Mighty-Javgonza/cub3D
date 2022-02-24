/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 10:06:55 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 15:33:17 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Cuts a string at pos start for len characters
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*rvalue;
	size_t	control;

	rvalue = malloc(len + 1);
	if (rvalue == (void *)0)
		return ((void *)0);
	ptr = (char *)(s + start);
	control = 0;
	*rvalue = '\0';
	if (start >= ft_strlen(s))
		return (rvalue);
	while (control < len && *ptr != '\0')
	{
		*(rvalue + control) = *ptr;
		ptr++;
		control++;
	}
	*(rvalue + control) = '\0';
	return (rvalue);
}
