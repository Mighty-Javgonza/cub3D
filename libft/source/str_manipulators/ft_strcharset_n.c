/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcharset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 09:23:08 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:33:20 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcharset_n(const char *s, char *set)
{
	char	*ptr;
	size_t	control;
	size_t	slen;

	slen = ft_strlen(s);
	control = 0;
	ptr = (char *)s;
	while (control < slen && *ptr != '\0')
	{
		if (!ft_ischarset(*ptr, set))
		{
			return (ptr);
		}
		ptr++;
		control++;
	}
	if (!ft_ischarset(*ptr, set))
		return (ptr);
	return ((void *)0);
}
