/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_row_in_image.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:42:04 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:52:50 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall_painter.h"
#include <stdio.h>
#include "../../graphics/graphics.h"

int	get_row_in_image(t_wall_slice_painter slice, int paint_offset)
{
	int	image_row;

	image_row = (paint_offset - slice.z_start_in_screen);
	return (image_row);
}
