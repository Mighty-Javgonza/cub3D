/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:05:15 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:31:46 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int			control;
	const char	*ptr;

	control = ft_strlen(s);
	while (control >= 0)
	{
		ptr = (s + control);
		if (*ptr == c)
		{
			return ((char *)ptr);
		}
		control--;
	}
	return ((void *)0);
}
