/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:05:13 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:31:30 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*ptr;
	int		cmp_result;
	size_t	control;
	size_t	blen;
	size_t	llen;

	control = 0;
	blen = ft_strlen(big);
	llen = ft_strlen(little);
	if (*little == '\0')
		return (char *)big;
	while (control + llen - 1 < len && control < blen - llen + 1)
	{
		ptr = (char *)(big + control);
		cmp_result = ft_memcmp(ptr, little, llen);
		if (cmp_result == 0)
			return (ptr);
		control++;
	}
	return ((void *)0);
}
