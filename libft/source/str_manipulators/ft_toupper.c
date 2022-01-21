/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 10:26:09 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:31:59 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	int	rvalue;
	int	lowup_diff;

	lowup_diff = 'A' - 'a';
	if (ft_islower(c))
	{
		rvalue = c + lowup_diff;
	}
	else
	{
		rvalue = c;
	}
	return (rvalue);
}
