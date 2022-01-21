/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_element_text_box.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:42:47 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 10:49:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UI_ELEMENT_TEXT_BOX_H
# define UI_ELEMENT_TEXT_BOX_H

# include "ui_element.h"
# include "ui_window.h"

typedef struct		s_ui_element_text_box
{
	t_ui_element	element;
	size_t			width;
	size_t			height;
	char			*text;
	t_color			back_color;
	t_color			fore_color;
	t_color			border_color;
	int				border_width;
	
	void			(*set_pos)(struct s_ui_element_text_box *this, \
								size_t x, size_t y);
	void			(*set_dims)(struct s_ui_element_text_box *this, \
								size_t width, size_t height);
	void			(*draw)(t_ui_element *elem);
}					t_ui_element_text_box;

struct s_c_ui_element_text_box
{
	t_ui_element_text_box (*new)(t_gbuff *);
};

extern const struct s_c_ui_element_text_box c_uielem_text_box;

void				mt_text_box_draw(t_ui_element *elem);
void				mt_text_box_set_pos(t_ui_element_text_box *this, size_t x, size_t y);
void				mt_text_box_set_dimensions(t_ui_element_text_box *this, size_t x, size_t y);

#endif
