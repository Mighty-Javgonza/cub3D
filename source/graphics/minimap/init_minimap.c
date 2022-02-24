/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_minimap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:14:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:38:06 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimap.h"
#include "../graphics.h"

//t_minimap debug_minimap;

t_minimap	init_minimap(t_graphic_environment *ge, t_world *w)
{
	t_minimap	rvalue;

	rvalue = (t_minimap)
	{
		.ge = ge,
		.img = new_graphic_image(ge, (t_pixpos){500, 500}),
		.world = w,
		.draw_pos = (t_pixpos){0, 0},
		.background = DEFAULT_MINIMAP_BACKGROUND,
	};
	return (rvalue);
}
