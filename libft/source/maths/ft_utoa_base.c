/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 08:56:20 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:17:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_utoa_base(long long int n, unsigned int base)
{
	char					*rvalue;
	int						i;
	unsigned long long int	n2;
	int						digit;
	char					c;

	n2 = *(unsigned long long int *)(void *)&n;
	i = ft_ucount_digits(n2, base);
	rvalue = malloc((i + 1) * sizeof(char));
	rvalue[i] = '\0';
	while (i-- > 0)
	{
		digit = n2 % base;
		if (digit <= 9)
			c = '0' + digit;
		else
			c = 'a' + (digit - 10);
		rvalue[i] = c;
		n2 = n2 / base;
	}
	return (rvalue);
}
