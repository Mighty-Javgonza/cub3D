/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:20:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 13:00:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	int	result;

	result = cub_atoi("15");
	if (result != 15)
		return (-1);
	result = cub_atoi("8");
	if (result != 8)
		return (-1);
	result = cub_atoi("-18");
	if (result != -18)
		return (-1);
	result = cub_atoi("25");
	if (result != 25)
		return (-1);
	return (0);
}
