/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:48 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:30:13 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		slen;
	char	*rvalue;

	slen = ft_strlen(s);
	rvalue = (char *)malloc(slen + 1);
	if (rvalue == (void *)0)
		return ((void *)0);
	ft_strlcpy(rvalue, s, slen + 1);
	return (rvalue);
}
