/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:13:24 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 11:55:46 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int main()
{
	t_bound_collider	bc;
	size_t				sc;
	size_t				index;
	t_segment			world_segment;

	sc = 1;
	bc = init_bound_collider(sc);
	bc.segments[0] = (t_segment){(t_vector){1, 3}, (t_vector){2, 6}};
	bc.pos = (t_vector){10, 10};
	index = 0;
	world_segment = get_bound_collider_segment_in_world(&bc, index);
	if (world_segment.p1.x != 11)
		return (-1);
	return 0;
}
