/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_graphic_image.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:55:25 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 12:50:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

t_graphic_image	init_graphic_image(void)
{
	t_graphic_image	rvalue;

	rvalue = (t_graphic_image)
	{
		.res.x = 0,
		.res.y = 0,
		.mlx_image = NULL,
		.color = 0xFF0000,
		.scale_factor = 1,
	};
	return (rvalue);
}
