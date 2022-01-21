/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prec_switch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:50:15 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:12:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	cut_from_end(struct s_string *str, int prec)
{
	if ((size_t)prec < str->length)
		str->delete(str, -1, str->length - (size_t)prec);
}

static void	add_zeros(struct s_string *str, int prec)
{
	int	start;
	int	zeros_to_add;

	start = str->s[0] == '-' ? 1 : 0;
	zeros_to_add = (size_t)prec - str->length;
	if (zeros_to_add > 0)
		str->append_chars(str, '0', zeros_to_add, 0);
}

/*
** Cuts or not depending on size and variable type
*/

void		ft_prec_switch(int prec, struct s_string *str, int conv)
{
	if (prec == -1)
		return ;
	else if (conv == 0 || conv == 2 || conv == 8)
		return ;
	else if (conv == 1)
		cut_from_end(str, prec);
	else if (conv >= 3 || conv <= 7)
		add_zeros(str, prec);
	else
		return ;
}
