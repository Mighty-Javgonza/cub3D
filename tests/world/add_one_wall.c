/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:34:20 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 16:49:00 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int main()
{
	t_world 	world;
	t_vector	new_wall;

	world = init_world();
	new_wall = (t_vector){4, 0};
	add_wall(&world, new_wall);
	if (world.walls[0].col.pos.x != 4)
		return (-1);
	return (0);
}
