/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_times.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:49:12 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/01 10:11:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Executes a piece of code a number of times
*/

void	ft_do_times(size_t times, void (*f)(size_t, void *), void *params)
{
	size_t	i;

	i = 0;
	while (i < times)
	{
		f(i, params);
		i++;
	}
}
