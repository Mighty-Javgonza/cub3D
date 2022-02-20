/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_row_in_image.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:42:04 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 12:41:34 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall_painter.h"
#include <stdio.h>
#include "../../graphics/graphics.h"

int	get_row_in_image(t_wall_slice_painter slice, int paint_offset)
{
	int 	image_row;

	image_row =  ((float)paint_offset - (float)slice.z_start_in_screen) * slice.image_step;
	return (image_row);
}
