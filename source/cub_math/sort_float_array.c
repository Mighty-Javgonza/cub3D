/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_float_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:52:59 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/13 15:34:00 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"
#include <stdio.h>

static void	initialize_ordered_indices(size_t *ordered_indices, size_t array_length)
{
	size_t	i;
	i = 0;
	while (i < array_length)
	{	
		ordered_indices[i] = i;
		i++;
	}
}

size_t	*sort_float_array(float *values, size_t array_length)
{
	size_t	i;
	size_t	j;
	size_t	*ordered_indices;
	
	ordered_indices = malloc(sizeof(*ordered_indices) * array_length);
	if (ordered_indices == NULL)
		exit(1); //TODO:mensajito de error
	initialize_ordered_indices(ordered_indices, array_length);
	j = 0;
	while (j < array_length)
	{
		i = 0;
		while (i < array_length - 1)
		{
			if (values[ordered_indices[i]] > values[ordered_indices[i + 1]])
				swap_size_t(&ordered_indices[i], &ordered_indices[i + 1]);
			i++;
		}
		j++;
	}
	return (ordered_indices);
}
