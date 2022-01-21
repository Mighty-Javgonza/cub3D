/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:23:10 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:31:22 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *s)
{
	char	*ptr;
	int		count;

	count = 0;
	ptr = (char *)s;
	while (*ptr != '\0' && ptr != (char *)0)
	{
		count++;
		ptr++;
	}
	return (count);
}
