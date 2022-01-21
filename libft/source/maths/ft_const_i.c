/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_const_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 13:18:30 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:37:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Constrains an integer between the two given bounds
*/

int	ft_const_i(int value, int lower_bound, int upper_bound)
{
	if (value > upper_bound)
		return (upper_bound);
	else if (value < lower_bound)
		return (lower_bound);
	return (value);
}
