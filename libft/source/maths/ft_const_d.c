/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_const_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 09:54:03 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 09:54:08 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Constrains a double between two given values
*/

double	ft_const_d(double value, double lower_bound, double upper_bound)
{
	if (value < lower_bound)
		return (lower_bound);
	if (value > upper_bound)
		return (upper_bound);
	return (value);
}
