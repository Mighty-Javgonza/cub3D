/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 10:07:11 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 15:33:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sizenew;
	char	*rvalue;

	sizenew = ft_strlen(s1) + ft_strlen(s2);
	rvalue = malloc(sizeof(*rvalue) * (sizenew + 1));
	if (rvalue == NULL)
		return (NULL);
	ft_strlcpy(rvalue, s1, ft_strlen(s1) + 1);
	ft_strlcat(rvalue, s2, sizenew + 1);
	return (rvalue);
}
