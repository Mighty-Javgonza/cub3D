/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:29:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 12:40:22 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	t_ray_collider	rc;
	t_segment		segment;
	t_collision		col;

	rc = init_ray_collider();
	rc.origin = (t_vector){0, 0};
	rc.direction = (t_vector){0.1, -0.9};
	segment = (t_segment){(t_vector){-3, -1}, (t_vector){3, -1}};
	col = collide_ray_segment(&rc, &segment);
	if (!(col.pos.y < -0.9))
		return (-1);
	return (0);
}
