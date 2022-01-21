/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:26 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:34:32 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			control;
	unsigned char	*ptrd;
	unsigned char	stopchar;

	stopchar = c;
	control = 0;
	while (control < n)
	{
		ptrd = (unsigned char *)(dest + control);
		*ptrd = *(unsigned char *)(src + control);
		if (*(unsigned char *)(src + control) == stopchar)
			return (ptrd + 1);
		control++;
	}
	return ((void *)0);
}
