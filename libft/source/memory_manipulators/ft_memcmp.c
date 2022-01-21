/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:29 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:35:01 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			control;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	control = 0;
	while (control < n)
	{
		ptr1 = (unsigned char *)(s1 + control);
		ptr2 = (unsigned char *)(s2 + control);
		if (*ptr1 != *ptr2)
		{
			return (*ptr1 - *ptr2);
		}
		control++;
	}
	return (0);
}
