/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_bigint_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:46:59 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/27 15:40:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	detect_underflow(long long unsigned int result, \
							long long unsigned int member)
{
	if (result > member)
		return (1);
	return (0);
}

static void		carry_bit(struct s_bigint *this, size_t carry_index)
{
	size_t	i;
	int		continue_carrying;

	i = carry_index + 1;
	continue_carrying = 1;
	while (i > 0 && continue_carrying) 
	{
		i--;
		continue_carrying = this->data[i] == 0;
		this->data[i]--;
	}
}

void	mt_bigint_sub(struct s_bigint *this, struct s_bigint *sub)
{
	size_t					i;
	long long unsigned int	original;

	i = this->size;
	while (i > 1)
	{
		i--;
		original = this->data[i];
		this->data[i] -= sub->data[i];
		if (detect_underflow(this->data[i], original))
			carry_bit(this, i - 1);
	}
	i--;
	original = this->data[i];
	this->data[i] -= sub->data[i];
}
