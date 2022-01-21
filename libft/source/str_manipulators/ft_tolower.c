/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 10:25:45 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:33:04 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	int	rvalue;
	int	uplow_diff;

	uplow_diff = 'a' - 'A';
	if (ft_isupper(c))
	{
		rvalue = c + uplow_diff;
	}
	else
	{
		rvalue = c;
	}
	return (rvalue);
}
