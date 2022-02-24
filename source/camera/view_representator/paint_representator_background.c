/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_representator_background.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:50:49 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:16:28 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"
#include "../../world/world.h"

void	paint_representator_background(t_view_representator *r, t_world *w)
{
	size_t	i;
	size_t	ceiling_size;
	size_t	full_resolution;

	full_resolution = r->res.x * r->res.y;
	ceiling_size = full_resolution * 8 / 12;
	i = 0;
	while (i < ceiling_size)
	{
		r->draw_buffer[i] = w->ceiling_color;
		i++;
	}
	while (i < full_resolution)
	{
		r->draw_buffer[i] = w->floor_color;
		i++;
	}
}
