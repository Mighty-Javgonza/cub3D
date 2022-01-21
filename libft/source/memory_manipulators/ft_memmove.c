/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:37 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:35:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			control;
	unsigned char	*ptr;
	int				direction;

	direction = src > dest ? 1 : -1;
	if ((dest == (void *)0 && src == (void *)0) || n == 0)
		return (dest);
	control = direction == 1 ? 0 : n - 1;
	while (direction == 1 ? control < n : 1)
	{
		ptr = (unsigned char *)(dest + control);
		*ptr = *(unsigned char *)(src + control);
		if (control == 0 && direction == -1)
			break ;
		control += direction;
	}
	return (dest);
}
