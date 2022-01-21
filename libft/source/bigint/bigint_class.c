/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_class.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:06:15 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/28 15:08:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bigint_class.h"

static void				init_data(long long unsigned int *data, \
										unsigned int size)
{
	while (size > 0)
	{
		size--;
		data[size] = 0;
	}
}

static struct s_bigint	new(unsigned int size)
{
	struct s_bigint	rvalue;

	rvalue.data = malloc(sizeof(*rvalue.data) * size);
	init_data(rvalue.data, size);
	rvalue.size = size;
	rvalue.set_base_value = &mt_bigint_set_base_value;
	rvalue.shift_left = &mt_bigint_shift_left;
	rvalue.shift_right = &mt_bigint_shift_right;
	rvalue.set_bit = &mt_bigint_set_bit;
	rvalue.add = &mt_bigint_add;
	rvalue.sub = &mt_bigint_sub;
	rvalue.mult = &mt_bigint_mult;
	rvalue.div = &mt_bigint_div;
	rvalue.mod = &mt_bigint_mod;
	rvalue.div_mod = &mt_bigint_div_mod;
	return (rvalue);
}

static struct s_bigint	copy(struct s_bigint *src)
{
	struct s_bigint	rvalue;
	size_t			i;
	
	rvalue = c_bigint.new(src->size);
	i = 0;
	while (i < src->size)
	{
		rvalue.data[i] = src->data[i];
		i++;
	}
	return (rvalue);
}

static void				destroy(struct s_bigint *this)
{
	free(this->data);
}

static struct s_string	to_string(struct s_bigint *this)
{
	struct s_string	rvalue;
	char			*n;
	size_t			i;

	rvalue = c_string.new("");
	i = this->size;
	while (i > 1)
	{
		i--;
		n = ft_utoa_base(this->data[i], 16);
		rvalue.append_p(&rvalue, n, 0);
		rvalue.append_p(&rvalue, " ", 0);
		free(n);
	}
	i--;
	n = ft_utoa_base(this->data[i], 16);
	rvalue.append_p(&rvalue, n, 0);
	return (rvalue);
}

const struct s_c_bigint	c_bigint = {.new = &new,
									.copy = &copy,
									.destroy = &destroy,
									.hex_to_string = &to_string,
									.dec_to_string = &cmt_bigint_dec_to_string,
									.compare = &cmt_bigint_compare,
									.isequal = &cmt_bigint_isequal};
