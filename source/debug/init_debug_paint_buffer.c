/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_debug_paint_buffer.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:32:55 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 12:41:14 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"
#include <stdlib.h>

t_debug_paint_buffer	debug_paint_buffer;

t_debug_paint_buffer	init_debug_paint_buffer(void *mlx, void *win)
{
	t_debug_paint_buffer	rvalue;
(void)win;
(void)mlx;

	rvalue = (t_debug_paint_buffer)
	{
	};
	return (rvalue);
}
