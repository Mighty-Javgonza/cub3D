/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:20:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/13 15:04:00 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	float	array[5];
	size_t	*ordered_indices;

	array[0] = 0;
	array[1] = 2;
	array[2] = 1;
	ordered_indices = sort_float_array(array, 3);
	if (ordered_indices[1] != 2)
		return (-1);
	return (0);
}
