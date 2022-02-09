/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 17:04:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <mlx.h>
#include "../../libft/libft.h"

int main()
{
	t_wall_slice_painter	start;
	t_wall_slice_painter	end;
	t_wall_slice_painter	mid;

	start.height_in_screen = 200;
	end.height_in_screen = 210;
	mid = interpolate_slice(start, end, 6, 2);
	if (mid.height_in_screen != 205)
		return (-1);
	return (0);
}
