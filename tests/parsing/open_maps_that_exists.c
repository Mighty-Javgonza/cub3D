/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:23:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:03:11 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	main()
{
	t_map	map;
	
	map = init_map("maps/invalid_map");
	open_map(&map);
	if (map.valid != 0)
		return (-1);
	map = init_map("maps/empty_map");
	open_map(&map);
	if (map.valid == 0)
		return (-1);
	return (0);
}
