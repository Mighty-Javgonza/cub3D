/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:28:28 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/11 18:12:41 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"

int	main()
{
	t_linear_door	door;
	float			door_posx_before_update;

	door = init_linear_door();
	start_opening_linear_door(&door);
	door_posx_before_update = door.wall.col.pos.x;
	update_linear_door(&door);
	if (door.wall.col.pos.x == door_posx_before_update)
		return (-1);
	return (0);
}
