/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:15:19 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/24 17:56:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"
#include <stdio.h>
#include <mlx.h>

void	display_image(t_graphic_environment *ge, t_graphic_image *img, t_pixpos p)
{
	mlx_put_image_to_window(ge->mlx, ge->win, img->mlx_image, p.x, p.y);
}
