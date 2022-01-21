/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:44 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:30:20 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	if (ptr == 0)
		return (0);
	while (1)
	{
		if (*ptr == 0)
			return (0);
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
}
