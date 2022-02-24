/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 09:22:25 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 15:45:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int b, int e)
{
	int	count;
	int	rvalue;

	count = 0;
	rvalue = 1;
	while (count < e)
	{
		rvalue = rvalue * b;
		count++;
	}
	return (rvalue);
}
