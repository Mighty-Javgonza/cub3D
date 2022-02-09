/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:23:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:43:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{

	t_map	map;
	
	map = init_map("");
	map.valid = 1;
	parse_world_line(&map, "1111001");
	parse_world_line(&map, "111W001");
	if (ft_lstsize(map.world_buffer) != 2)
	   return (-1);	
	return (0);
}
