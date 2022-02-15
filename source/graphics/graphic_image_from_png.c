/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphic_image_from_png.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:12:01 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 14:57:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"
#include <stdio.h>
#include <mlx.h>
#include "../error/error.h"

t_graphic_image	graphic_image_from_png(t_graphic_environment *ge, char *path)
{
	t_graphic_image	image;
	int				width;
	int				height;
	int				ignored;

	image = init_graphic_image();
	image.mlx_image = mlx_png_file_to_image(ge->mlx, path, &width, &height);
	if(image.mlx_image == NULL)
		exit_and_message("");
	image.addr = (void *)mlx_get_data_addr(image.mlx_image, &ignored, &image.line_length, &ignored);
	image.res = (t_pixpos){width, height};
	return (image);
	}
