/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 15:31:20 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	copy_from_left_to_right(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	copy_from_right_to_left(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		dest[i] = src[i];
		i--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
		copy_from_left_to_right(dest, src, n);
	else
		copy_from_right_to_left(dest, src, n);
	return (dest);
}
