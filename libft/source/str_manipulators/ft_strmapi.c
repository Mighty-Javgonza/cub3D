/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:05:09 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:32:39 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	char	*news;
	char	*sptr;
	char	*ptr;
	size_t	i;

	ptr = (char *)s;
	news = malloc(ft_strlen(s) + 1);
	if (news == (void *)0)
		return ((void *)0);
	*(news + ft_strlen(s)) = '\0';
	sptr = news;
	i = 0;
	while (i < ft_strlen(s))
	{
		*sptr = (*f)(i, *ptr);
		i++;
		ptr++;
		sptr++;
	}
	return (news);
}
