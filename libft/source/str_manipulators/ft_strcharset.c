/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcharset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 09:23:08 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:30:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcharset(const char *s, char *set)
{
	char	*ptr;
	size_t	control;
	size_t	slen;

	slen = ft_strlen(s);
	control = 0;
	ptr = (char *)s;
	while (control < slen && *ptr != '\0')
	{
		if (ft_ischarset(*ptr, set))
		{
			return (ptr);
		}
		ptr++;
		control++;
	}
	if (ft_ischarset(*ptr, set))
		return (ptr);
	return ((void *)0);
}
