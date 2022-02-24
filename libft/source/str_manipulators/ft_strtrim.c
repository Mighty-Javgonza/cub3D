/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 10:08:07 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 15:33:27 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_caracter_set(char const c, char const *set)
{
	char	*ptr;

	ptr = (char *)set;
	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (1);
		}
		ptr++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*bptr;
	char	*eptr;
	char	*rvalue;
	size_t	rlength;
	size_t	olength;

	olength = ft_strlen(s1);
	bptr = (char *)s1;
	eptr = ((char *)s1) + olength - 1;
	while (check_caracter_set(*bptr, set) == 1 && *bptr != '\0')
		bptr++;
	while (check_caracter_set(*eptr, set) == 1 && eptr > bptr)
		eptr--;
	rlength = eptr - bptr;
	rvalue = ft_substr(bptr, 0, rlength + 1);
	return (rvalue);
}
