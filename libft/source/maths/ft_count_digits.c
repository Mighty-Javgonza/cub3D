/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 09:24:04 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:13:30 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** IMPORTANT: Does not work with base 1
*/

int	ft_count_digits(long long int n, int base)
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
