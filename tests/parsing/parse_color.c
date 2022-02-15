/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:23:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 13:07:23 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	t_map					map;
	t_graphic_environment	ge;
	
	ge = init_graphic_environment((t_pixpos){100, 100});
	map = init_map("");
	parse_color(&map, "F 255,000,0");
	if (map.floor_color != 0XFF0000)
		return (-1);
	return (0);
}
