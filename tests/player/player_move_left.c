/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:05:48 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 15:44:33 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	t_player	player;

	player = init_player();
	player.cam.direction = (t_vector) {0, -1};
	player.cam.pos.x = 0;
	//print_vector(player.cam.pos);
	player_move_left(&player);
	//print_vector(player.cam.pos);
	if (!(player.cam.pos.x < 0))
		return (-1);
	return (0);
}
