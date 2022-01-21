/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_bigint_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:48:48 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/25 14:01:40 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bigint_class.h"

static unsigned char	detect_overflow(long long unsigned int sum_result, 
								long long unsigned int sum_member)
{
		if (sum_result < sum_member)
			return (1);
		else
			return (0);
}

/*
** Carry index is the index of where the carried bit must be put
*/

static void				carry_bit(struct s_bigint *this, size_t carry_index)
{
	size_t	i;
	int		continue_carrying;

	i = carry_index + 1;
	continue_carrying = 1;
	while (i > 0 && continue_carrying)
	{
		i--;
		continue_carrying = this->data[i] == -1ull;
		this->data[i]++;
	}
}

void			mt_bigint_add(struct s_bigint *this, struct s_bigint *add)
{
	size_t					t_i;
	size_t					a_i;
	unsigned char			carry;
	unsigned long long int	addition;
	
	a_i = add->size;
	t_i = this->size;
	while (a_i > 1 && t_i > 1)
	{
		t_i--;
		a_i--;
		addition = this->data[t_i] + add->data[a_i];
		carry = detect_overflow(addition, this->data[t_i]);
		this->data[t_i] = addition;
		if (carry)
			carry_bit(this, t_i - 1);
	}
	t_i--;
	a_i--;
	this->data[t_i] += add->data[a_i];
}
