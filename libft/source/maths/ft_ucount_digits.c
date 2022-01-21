/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ucount_digits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 08:59:42 by javgonza          #+#    #+#             */
/*   Updated: 2020/09/03 09:01:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ucount_digits(unsigned long long int n, int base)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / base;
		count++;
	}
	return (count);
}
