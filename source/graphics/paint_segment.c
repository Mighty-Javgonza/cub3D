/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_segment.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:08:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 12:57:00 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

void	paint_segment(t_graphic_image *img, t_segment *s)
{
	t_vector	m;
	t_vector	diff;
	float		length;
	t_vector	coords;

	diff = sub_vectors(s->p2, s->p1);
	length = vector_length(diff) * img->scale_factor;
	coords = s->p1;
	m.x = diff.x / length;
	m.y = diff.y / length;
	while (length >= 1)
	{
		coords = add_vectors(coords, m);
		put_pixel(img, coords, img->color);
		length--;
	}
}
