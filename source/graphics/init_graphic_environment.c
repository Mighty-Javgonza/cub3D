/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_graphic_environment.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:45:54 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/06 11:58:47 by javgonza         ###   ########.fr       */
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
	rvalue.draw_buffer = new_graphic_image(&rvalue, res);
	return (rvalue);
}
