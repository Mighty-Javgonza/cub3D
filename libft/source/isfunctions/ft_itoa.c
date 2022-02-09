/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:04:21 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:17:03 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../maths/libft_math.h"

static char	*get_initial_array(int n, int ndigits)
{
	char	*rvalue;

	if (n >= 0)
		rvalue = malloc(ndigits + 1);
	else
		rvalue = malloc(ndigits + 2);
	if (rvalue == (void *)0)
		return ((void *)0);
	if (n == 0)
	{
		*rvalue = '0';
		*(rvalue + 1) = '\0';
	}
	return (rvalue);
}

char		*ft_itoa(int n)
{
	char	*rvalue;
	int		i;
	char	*ptr;
	int		ndigits;

	ndigits = ft_count_digits(n, 10);
	rvalue = get_initial_array(n, ndigits);
	if (rvalue == (void *)0)
		return ((void *)0);
	ptr = rvalue;
	if (*ptr == '0')
		return (rvalue);
	if (n < 0)
		*ptr++ = '-';
	i = 0;
	while (i < ndigits)
	{
		*(ptr) = ((n / ft_pow(10, ndigits - i - 1)) % 10) + '0';
		*ptr = *ptr < '0' ? '0' + ('0' - *ptr) : *ptr;
		i++;
		ptr++;
	}
	*ptr = '\0';
	return (rvalue);
}
