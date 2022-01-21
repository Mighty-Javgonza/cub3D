/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:39 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:34:41 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	control;
	char	*ptr;

	control = 0;
	while (control < n)
	{
		ptr = s + control;
		*ptr = c;
		control++;
	}
	return (s);
}
