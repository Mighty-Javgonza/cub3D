/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:27 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 15:25:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			control;
	unsigned char	evaluated;
	unsigned char	*ptr;

	control = 0;
	while (control < n)
	{
		ptr = (unsigned char *)(s + control);
		evaluated = *ptr;
		if (evaluated == (unsigned char)c)
		{
			return (ptr);
		}
		control++;
	}
	return ((void *)0);
}
