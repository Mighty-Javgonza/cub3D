/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_debug_paint_buffer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:36:02 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 12:42:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include <mlx.h>

void	setup_debug_paint_buffer(void *mlx, void *win, size_t res_x, size_t res_y)
{
	(void)res_y;
	(void)res_x;
	(void)win;
	(void)mlx;

	debug_paint_buffer = init_debug_paint_buffer(mlx, win);
/*	debug_paint_buffer.res_x = res_x;
	debug_paint_buffer.res_y = res_y;
	debug_paint_buffer.img = mlx_new_image(mlx, res_x, res_y);
	debug_paint_buffer.addr = mlx_get_data_addr(mlx, NULL, NULL, NULL);
*/
}
