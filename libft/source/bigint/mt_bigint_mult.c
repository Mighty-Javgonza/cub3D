/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_bigint_mult.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:32:51 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/26 13:49:35 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bigint_class.h"

static struct s_bigint	multiply_bigint_int(struct s_bigint *n1, \
										long long unsigned int n2)
{
	size_t					current_bit;
	struct s_bigint			rvalue;
	struct s_bigint			current_add;

	rvalue = c_bigint.new(n1->size);
	current_bit = 0;
	while (current_bit < (sizeof(n2) * 8))
	{
		if ((n2 & (1ull << current_bit)) != 0)
		{
			current_add = c_bigint.copy(n1);	
			current_add.shift_left(&current_add, current_bit);
			rvalue.add(&rvalue, &current_add);
		}
		current_bit++;
	}
	return (rvalue);
}

void	mt_bigint_mult(struct s_bigint *this, struct s_bigint *mult)
{
	size_t			i;
	struct s_bigint	r;
	struct s_bigint	rr;

	r = c_bigint.new(mult->size);
	i = this->size;
	while (i > 0)
	{
		i--;
		rr = multiply_bigint_int(this, mult->data[i]);
		rr.shift_left(&rr, (this->size - i - 1) * 64);
		r.add(&r, &rr);
	}
	*this = c_bigint.copy(&r);
}
