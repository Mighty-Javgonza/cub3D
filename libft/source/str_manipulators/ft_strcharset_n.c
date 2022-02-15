/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcharset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 09:23:08 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 18:43:29 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_str_manipulators.h"

char	*ft_strcharset_n(const char *s, char *set)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (!ft_ischarset(*ptr, set))
			return (ptr);
		ptr++;
	}
	return (NULL);
}
