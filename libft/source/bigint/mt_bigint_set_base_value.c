/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_bigint_set_base_value.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:19:32 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/23 15:26:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bigint_class.h"

static void		set_to_zero(struct s_bigint *this)
{
	size_t	i;

	i = 0;
	while (i < this->size)
	{
		this->data[i] = 0;
		i++;
	}
}

void			mt_bigint_set_base_value(struct s_bigint *this, \
								long long unsigned int value)
{
	set_to_zero(this);
	this->data[this->size - 1] = value;
}
