/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_varg_read_switch.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:57:53 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 11:23:18 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_all_types	ft_varg_read_switch(int conv, va_list vargs)
{
	t_all_types	rvalue;

	rvalue.i = 0;
	if (conv == 0)
		rvalue.c = va_arg(vargs, int);
	else if (conv == 1 || conv == 2)
		rvalue.p = va_arg(vargs, void *);
	else if (conv >= 3 && conv <= 7)
		rvalue.ull = va_arg(vargs, long long int);
	else if (conv >= 10 && conv <= 12)
		rvalue.ld = va_arg(vargs, long double);
	return (rvalue);
}
