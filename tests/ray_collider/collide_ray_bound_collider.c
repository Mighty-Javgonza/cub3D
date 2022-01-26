/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:29:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 16:36:48 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	t_ray_collider		rc;
	t_collision			col;
	t_bound_collider	bc;

	bc = init_bound_collider(1);
	rc = init_ray_collider();
	rc.origin = (t_vector){0, 0};
	rc.max_length = 10;
	rc.direction = (t_vector){0.1, -0.9};
	bc.segments[0] = (t_segment){(t_vector){-3, -1}, (t_vector){3, -1}};
	col = collide_ray_bound_collider(&rc, &bc);
	if (!(col.pos.y < -0.9))
		return (-1);
	return (0);
}
