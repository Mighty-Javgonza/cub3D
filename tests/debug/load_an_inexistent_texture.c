/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_an_inexistent_texture.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:41:40 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 14:47:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>

int	main()
{
	t_map					map;
	t_graphic_environment	ge;

	map = init_map("");
	ge = init_graphic_environment((t_pixpos){100, 100});
	parse_texture(&map, &ge, "NO sadffdsasfda");
	return (0);
}
