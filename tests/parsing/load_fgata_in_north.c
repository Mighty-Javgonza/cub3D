/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:23:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/10 16:06:32 by javgonza         ###   ########.fr       */
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
	parse_texture(&map, &ge, "NO assets/walls/fgata-va.png");
	if (map.textures[NORTH_TEXTURE].res.x != 2036)
	   return (-1);	
	return (0);
}
