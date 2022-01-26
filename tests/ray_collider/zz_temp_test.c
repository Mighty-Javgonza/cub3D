/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:29:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 19:04:58 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	t_ray_collider		rc;
	t_collision			col;
	t_wall				wall;

	wall = init_wall();
	wall.col.pos = (t_vector){100, 0};
	rc = init_ray_collider();
	rc.origin = (t_vector){0, 0};
	rc.direction = (t_vector){0.907807, 0.419388};
	rc.max_length = 3;
//	rc.direction = (t_vector){1, 0};
	col = calculate_ray_collider_wall_collision(&rc, &wall);
printf("%d\n", col.exists);
	print_vector(col.pos);
	if (col.exists)
		return (-1);
	return (0);
}
