/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:20:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 18:22:04 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	t_segment		s1;
	t_segment		s2;
	t_collision		col;

	s1 = (t_segment){(t_vector){1, 1},(t_vector){3, 2}};
	s2 = (t_segment){(t_vector){1, 4},(t_vector){2, -1}};
	col = collide_segments(&s1, &s2);
	if (col.pos.x * 11 != 17 || col.pos.y * 11 != 14)
		return (-1);
	return (0);
}
