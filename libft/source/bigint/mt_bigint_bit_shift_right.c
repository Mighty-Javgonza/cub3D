/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_bigint_bit_shift_right.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:39:42 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/26 14:31:52 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bigint_class.h"

static unsigned int	get_right_most_bit(long long unsigned int val)
{
	if ((val & 1ull) != 0)
		return (1);
	return (0);
}

static void			shift_once_right(struct s_bigint *this)
{
	size_t	i;
	size_t	carry_new;
	size_t	carry_old;

	i = 0;
	carry_old = 0;
	carry_new = 0;
	while (i < this->size)
	{
		carry_new = get_right_most_bit(this->data[i]);
		this->data[i] >>= 1;
		this->data[i] += carry_old << 63;
		carry_old = carry_new;
		i++;
	}
}

void	mt_bigint_shift_right(struct s_bigint *this, unsigned int amount)
{
	size_t	count;

	count = 0;
	while (count < amount)
	{
		shift_once_right(this);
		count++;
	}
}
