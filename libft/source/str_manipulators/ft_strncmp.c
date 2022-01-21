/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:05:12 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:31:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			control;

	control = 0;
	while (control < n)
	{
		ptr1 = (unsigned char *)(s1 + control);
		ptr2 = (unsigned char *)(s2 + control);
		if (*ptr1 != *ptr2 || *ptr1 == '\0' || *ptr2 == '\0')
		{
			return (*ptr1 - *ptr2);
		}
		control++;
	}
	return (0);
}
