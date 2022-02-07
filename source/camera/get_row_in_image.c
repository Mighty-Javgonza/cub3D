/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_row_in_image.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:42:04 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 10:46:55 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>
#include "../graphics/graphics.h"

int	get_row_in_image(t_wall_slice_painter slice, int paint_offset, t_graphic_image *image)
{
	int 	image_row;
	float	step;
	float	p;

	step = (float)slice.height_in_screen / (float)image->res.y;
	p = proportion_between(0, slice.height_in_screen, paint_offset - slice.z_start_in_screen);
	image_row = p * image->res.y;
	return (image_row);
}
