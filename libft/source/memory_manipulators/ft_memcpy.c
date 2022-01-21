/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:33 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:35:23 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	control;
	char	*ptr;

	if (dest == (void *)0 && src == (void *)0)
	{
		return (dest);
	}
	control = 0;
	while (control < n)
	{
		ptr = dest + control;
		*(ptr) = *((char *)(src + control));
		control++;
	}
	return (dest);
}