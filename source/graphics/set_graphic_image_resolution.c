/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_graphic_image_resolution.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:57:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 13:05:43 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"
#include <stdio.h>
#include <mlx.h>

void	set_graphic_image_resolution(t_graphic_image *img, t_graphic_environment *ge, t_pixpos res)
{
	int	bpp;
	int	endian;

	img->res.x = res.x;
	img->res.y = res.y;

	if (img->mlx_image != NULL)
		free(img->mlx_image);
	img->mlx_image = mlx_new_image(ge->mlx, res.x, res.y);
	img->addr = (void *)mlx_get_data_addr(img->mlx_image, &bpp, &img->line_length, &endian);
}
