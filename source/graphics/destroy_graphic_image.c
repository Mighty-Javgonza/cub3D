/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_graphic_image.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:02:04 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 13:05:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"
#include <mlx.h>

void	destroy_graphic_image(t_graphic_image *img, void *mlx)
{
	mlx_destroy_image(mlx, img->mlx_image);
}
