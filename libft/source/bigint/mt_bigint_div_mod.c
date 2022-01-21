/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_bigint_div_mod.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 13:27:39 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/29 09:33:18 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Always overshoots by 1 and then corrects
*/

static long long unsigned int	find_biggest_possible_shift(struct s_bigint *limit, \
												struct s_bigint *n)
{
	struct s_bigint			factor;
	long long unsigned int	rvalue;

	rvalue = 0;
	factor = c_bigint.copy(n);
	while (c_bigint.compare(&factor, limit) <= 0)
	{
		factor.shift_left(&factor, 1);
		rvalue++;
	}
	rvalue--;
	return (rvalue);
}

struct s_bigint	mt_bigint_div_mod(struct s_bigint *this, struct s_bigint *div)
{
	struct s_bigint			remainder;
	struct s_bigint			factor;
	struct s_bigint			result;
	struct s_bigint			current_bit;
	long long unsigned int	bit;

	remainder = c_bigint.copy(this); 
	current_bit = c_bigint.new(this->size);
	current_bit.set_base_value(&current_bit, 1);
	factor = c_bigint.copy(div);
	result = c_bigint.new(this->size);
	while (c_bigint.compare(&remainder, div) >= 0)
	{
		bit = find_biggest_possible_shift(&remainder, div);
		current_bit.shift_left(&current_bit, bit);
		factor.shift_left(&factor, bit);
		remainder.sub(&remainder, &factor);
		result.add(&result, &current_bit);
		current_bit = c_bigint.new(this->size);
		current_bit.set_base_value(&current_bit, 1);
		factor = c_bigint.copy(div);
	}
	if (c_bigint.compare(&remainder, div) == 0)
	{
		remainder.sub(&remainder, div);
		result.add(&result, div);
	}
	*this = result;
	return (remainder);
}
