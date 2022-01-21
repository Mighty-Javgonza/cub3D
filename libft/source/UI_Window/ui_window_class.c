/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_window_class.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:14:44 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 11:16:57 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ui_window.h"
#include <stdlib.h>

static t_ui_window	new(size_t res_x, size_t res_y, char *name, t_gserver *handler)
{
	t_ui_window		rvalue;
	
	rvalue = (t_ui_window) {
		.ui_elements = ft_lstnew(0),
		.res_x = res_x,
		.res_y = res_y,
		.back_color = 0x00000000,
		.server = handler,
		.add = mt_ui_window_add_element,
		.clean = mt_ui_window_clean,
		.draw = mt_ui_window_draw,
	};
	rvalue.gbuff = ft_create_gbuff(res_x, res_y, handler);
	rvalue.gwin = ft_create_window(res_x, res_y, name, handler);
	return (rvalue);
}

static void			display(t_ui_window *this)
{
	ft_display_buff(&this->gbuff, &this->gwin);
}

const struct		s_c_ui_window c_ui_win = {.new = &new,
											.display = &display};
