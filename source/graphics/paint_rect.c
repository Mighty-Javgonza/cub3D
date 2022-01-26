/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_rect.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:12:27 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 13:19:59 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

void	paint_rect(t_graphic_image *img, t_rectangle r)
{
	t_vector	pos;
	float		step;

	step = 1 / img->scale_factor;
	pos = r.pos;
	while (pos.y < r.pos.y + r.size.y)
	{
		pos.x = r.pos.x;
		while (pos.x < r.pos.x + r.size.x)
		{
			put_pixel(img, pos, img->color);
			pos.x += step;
		}
		pos.y += step;
	}
}
