/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_bigint_bit_shift_left.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:34:12 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/26 14:31:59 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bigint_class.h"

static unsigned int	get_left_most_bit(long long unsigned int val)
{
	if ((val & (1ull << 63)) != 0)
		return (1);
	return (0);
}

static void			shift_once(struct s_bigint *this)
{
	char	old_carry;
	char	new_carry;
	size_t	i;

	i = this->size - 1;
	old_carry = 0;
	new_carry = 0;
	while (i > 0)
	{
		new_carry = get_left_most_bit(this->data[i]);
		this->data[i] <<= 1;
		this->data[i] += old_carry;
		old_carry = new_carry;
		i--;
	}
	this->data[i] <<= 1;
	this->data[i] += old_carry;
}

void	mt_bigint_shift_left(struct s_bigint *this, unsigned int amount)
{
	size_t	count;

	count = 0;
	while (count < amount)
	{
		shift_once(this);
		count++;
	}
}
