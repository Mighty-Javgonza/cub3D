/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_size_t.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:10:05 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/13 15:10:43 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

void	swap_size_t(size_t *first, size_t *second)
{
	size_t	swap;

	swap = *first;
	*first = *second;
	*second = swap;
}
