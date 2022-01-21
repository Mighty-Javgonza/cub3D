/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:05:01 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:30:57 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	control;
	char	*ptr;

	if (dst == (void *)0)
		return (0);
	control = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (control < size - 1)
	{
		ptr = (char *)(src + control);
		if (*ptr == '\0')
		{
			*(dst + control) = '\0';
			return (control);
		}
		*(dst + control) = *ptr;
		control++;
	}
	*(dst + control) = '\0';
	return (ft_strlen(src));
}
