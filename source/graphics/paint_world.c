/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:45:44 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 12:57:22 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../world/world.h"
#include "graphics.h"

void	paint_world(t_graphic_image *img, t_world *w)
{
	size_t	i;

	i = 0;
	while (i < w->wall_count)
	{
		paint_bound_collider(img, &w->walls[i].col);
		i++;
	}
}
