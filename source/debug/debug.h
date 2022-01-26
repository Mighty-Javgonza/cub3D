/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:29:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/24 18:11:23 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H

# include <stdlib.h>
#include "../graphics/graphics.h"

typedef struct s_debug_paint_buffer
{
	t_graphic_image	*buffer;
}				t_debug_paint_buffer;

extern	t_debug_paint_buffer	debug_paint_buffer;

t_debug_paint_buffer	debug_paint_buffer;
t_debug_paint_buffer	init_debug_paint_buffer(void *mlx, void *win);
void	setup_debug_paint_buffer(void *mlx, void *win, size_t res_x, size_t res_y);

#endif
