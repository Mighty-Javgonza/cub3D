/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_window.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 11:57:11 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 11:08:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UI_WINDOW_H
# define UI_WINDOW_H

# include "../../type_defs.h"
# include "ui_element.h"
# include "ui_element_text_box.h"

typedef struct		s_ui_window
{
	t_list			*ui_elements;
	size_t			res_x;
	size_t			res_y;
	t_color			back_color;
	t_gserver		*server;
	t_gbuff			gbuff;
	t_gwindow		gwin;

	void			(*add)(struct s_ui_window *this, t_ui_element *);
	void			(*clean)(struct s_ui_window *this);
	void			(*draw)(struct s_ui_window *this);
}					t_ui_window;

struct			s_c_ui_window
{
	t_ui_window	(*new)(size_t res_x, size_t res_y, char *name, t_gserver *handler);
	void		(*display)(t_ui_window *this);
};

extern const struct	s_c_ui_window c_ui_win;

void				mt_ui_window_add_element(t_ui_window *this, t_ui_element *element);
void				mt_ui_window_clean(t_ui_window *this);
void				mt_ui_window_draw(t_ui_window *this);

#endif
