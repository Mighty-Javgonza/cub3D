/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:29:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 17:18:31 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	main()
{
	t_ray_collider	rc;
	t_wall			wall;
	t_collision		col;

	rc = init_ray_collider();
	rc.origin = (t_vector){0, 0};
	rc.direction = (t_vector){1, 0};

	wall = init_wall();
	wall.pos = (t_vector){1, 0};

	col = calculate_ray_collider_wall_collision(&rc, &wall);
	if (col.pos.x != 0.5)
		return (-1);
	return (0);
}
