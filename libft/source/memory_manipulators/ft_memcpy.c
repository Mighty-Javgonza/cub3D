/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:33 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 15:25:48 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	control;

	control = 0;
	while (control < n)
	{
		((char *)dest)[control] = ((char *)src)[control];
		control++;
	}
	return (dest);
}
