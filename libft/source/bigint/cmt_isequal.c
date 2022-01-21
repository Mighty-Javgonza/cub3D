/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmt_isequal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:37:14 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/26 14:36:48 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bigint_class.h"

static int				compare_block_from_right(struct s_bigint n1, \
										struct s_bigint n2, size_t index)
{
	if (n1.data[n1.size - index - 1] == n2.data[n2.size - index - 1])
		return (1);
	return (0);
}


static int				check_all_blocks_equal_zero(struct s_bigint n, \
												size_t check_size)
{
	while (check_size > 0)
	{
		check_size--;
		if (n.data[check_size] != 0)
			return (0);
	}
	return (1);
}

int						cmt_bigint_isequal(struct s_bigint n1, struct s_bigint n2)
{
	size_t	i;

	i = 0;
	while (i < n1.size && i < n2.size)
	{
		if (compare_block_from_right(n1, n2, i) == 0)
			return (0);
		i++;
	}
	if (n1.size > n2.size)
		return (check_all_blocks_equal_zero(n1, n1.size - i));
	return (check_all_blocks_equal_zero(n2, n2.size - i));
}
