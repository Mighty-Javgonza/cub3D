/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:40:29 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:13:22 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Absolute value of a double
*/

double	ft_abs_d(double value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}
