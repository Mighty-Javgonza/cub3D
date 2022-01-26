/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:51:24 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 13:00:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"
#include <stdio.h>

void	put_pixel(t_graphic_image *img, t_vector pos, unsigned int color)
{
	t_pixpos	scale;

	scale.x  = pos.x * img->scale_factor;
	scale.y  = pos.y * img->scale_factor;
	if (scale.x > 0 && scale.x < img->res.x && scale.y > 0 && scale.y < img->res.y)
		img->addr[scale.x + scale.y * img->res.x] = color;
}
