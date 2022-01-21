/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 17:42:44 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:32:29 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_splits(const char *s, char c)
{
	int		count;
	char	*ptr;

	ptr = (char *)s;
	while (*ptr == c)
		ptr++;
	if (ptr == 0)
		return (0);
	count = 1;
	while (1)
	{
		while (*ptr != c && *ptr != '\0')
			ptr++;
		if (*ptr == '\0')
			return (count);
		while (*ptr == c && *ptr != '\0')
			ptr++;
		if (*ptr == '\0')
			return (count);
		count++;
	}
	return (count);
}

static char	**get_split_array(char const *s, char c)
{
	char	**rvalue;
	int		count;

	count = count_splits(s, c);
	rvalue = malloc(sizeof(char *) * (count + 1));
	rvalue[count] = (void *)0;
	return (rvalue);
}

char		**ft_split(char const *s, char c)
{
	char	*ptr;
	int		count;
	char	**rvalue;
	char	*mrk;

	rvalue = get_split_array(s, c);
	if (rvalue == (void *)0)
		return ((void *)0);
	count = 0;
	ptr = (char *)s;
	while (*ptr != '\0')
	{
		while (*ptr == c && *ptr != '\0')
			ptr++;
		if (*ptr == '\0')
			break ;
		mrk = ptr;
		while (*ptr != c && *ptr != '\0')
			ptr++;
		rvalue[count] = ft_substr(mrk, 0, ptr - mrk);
		count++;
	}
	return (rvalue);
}
