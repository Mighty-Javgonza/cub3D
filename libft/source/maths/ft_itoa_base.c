/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tobase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 09:18:05 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:36:38 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	abs_lli(long long int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

static char	get_printable_digit(int digit)
{
	if (digit <= 9)
		return ('0' + digit);
	else
		return ('a' + digit);
}

char		*ft_itoa_base(long long int n, unsigned int base)
{
	char	*rvalue;
	int		digit;
	int		sign;
	size_t	n_digits;

	sign = n < 0 ? 1 : 0;
	n_digits = ft_count_digits(n, base);
	rvalue = malloc(sizeof(*rvalue) * (n_digits + sign + 1));
	rvalue[n_digits + sign] = '\0';
	while (n_digits > 0)
	{
		digit = abs_lli(n % base);
		rvalue[n_digits + sign - 1] = get_printable_digit(digit);
		n = n / base;
		n_digits--;
	}
	if (sign)
		rvalue[0] = '-';
	return (rvalue);
}
