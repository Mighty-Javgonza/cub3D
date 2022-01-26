/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_graphic_environment.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:45:54 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/24 17:17:15 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"
#include <mlx.h>

t_graphic_environment	init_graphic_environment(t_pixpos res)
{
	t_graphic_environment	rvalue;

	rvalue = (t_graphic_environment)
	{
		.mlx = mlx_init(),
	};
	rvalue.win = mlx_new_window(rvalue.mlx, res.x, res.y, "Cub3D");
	rvalue.draw_buffer = mlx_new_image(rvalue.mlx, res.x, res.y);
	return (rvalue);
}
