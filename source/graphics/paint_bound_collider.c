/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_bound_collider.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:24:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 12:40:03 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

void	paint_bound_collider(t_graphic_image *img, t_bound_collider *col)
{
	size_t		i;
	t_segment	segment;

	i = 0;
	img->color = 0x0000FF;
	while (i < col->segment_count)
	{
		segment = add_segment_vector(col->segments[i], col->pos);
		paint_segment(img, &segment);
		i++;
	}
}
