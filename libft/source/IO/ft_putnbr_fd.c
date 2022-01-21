/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 10:02:50 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:40:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr_fd(int n, int fd)
{
	int		control;
	int		ndigits;
	int		i;
	char	c;

	i = 1;
	ndigits = ft_count_digits(n, 10);
	control = n;
	if (n < 0)
		write(fd, "-", 1);
	while (i <= ndigits)
	{
		c = ((control / ft_pow(10, ndigits - i)) % 10) + '0';
		c = c < '0' ? 2 * '0' - c : c;
		write(fd, &c, 1);
		i++;
	}
}
