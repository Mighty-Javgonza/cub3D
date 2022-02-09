/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:23:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/09 15:24:34 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	t_map	map;
	int		neighbour_ok;
	
	map = init_map("maps/irregular_fool");
	open_map(&map);
	parse_world_lines(&map);
	neighbour_ok = char_has_valid_neighbours(&map, 5, 2);
	if (neighbour_ok != 0)
	   return (-1);	
	return (0);
}
