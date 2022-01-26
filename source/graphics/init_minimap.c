/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_minimap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:14:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 19:04:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

t_minimap	init_minimap(t_graphic_environment *ge, t_world *w)
{
	t_minimap	rvalue;

	rvalue = (t_minimap)
	{
		.ge = ge,
		.img = new_graphic_image(ge, DEFAULT_MINIMAP_RESOLUTION),
		.world = w,
		.draw_pos = DEFAULT_MINIMAP_DRAW_POS,
		.background = DEFAULT_MINIMAP_BACKGROUND,
	};
	return (rvalue);
}
