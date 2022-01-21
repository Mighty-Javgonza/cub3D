/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_bigint_set_bit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:01:41 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/28 15:58:23 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	mt_bigint_set_bit(struct s_bigint *n, size_t bit_index, char value)
{
	size_t					total_bits;
	size_t					block;
	size_t					sub_index;
	long long unsigned int	new_val;

	total_bits = n->size * 64;
	block = (total_bits - bit_index) / 64;
	sub_index = bit_index % 64;
	new_val = n->data[block];
	new_val = new_val | ((unsigned long long int)(value) << sub_index);
	n->data[block] = new_val;
}
