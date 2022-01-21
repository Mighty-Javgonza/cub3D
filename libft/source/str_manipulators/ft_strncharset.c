/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncharset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 09:45:26 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:09:44 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Size bound strcharset
*/

char	*ft_strncharset(const char *s, char *set, size_t n)
{
	char	*ptr;
	size_t	control;

	control = 0;
	ptr = (char *)s;
	while (control < n)
	{
		if (ft_ischarset(*ptr, set))
			return (ptr);
		ptr++;
		control++;
	}
	return ((void *)0);
}
