/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:03:22 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:33:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	size_t	control;
	char	*ptr;

	control = 0;
	while (control < n)
	{
		ptr = s + control;
		*ptr = '\0';
		control++;
	}
}
