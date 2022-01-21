/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_element.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:35:05 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 10:59:45 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UI_ELEMENT_H
# define UI_ELEMENT_H

/*
** win is a reference to the window the element should be drawn on
*/

typedef struct	s_ui_element
{
	size_t		pos_x;
	size_t		pos_y;
	t_gbuff		*gbuff;
	void		*parent;
	void		(*draw)(struct s_ui_element *this);
}				t_ui_element;

struct			s_c_ui_element
{
	t_ui_element	(*new)(size_t, size_t, t_gbuff *);
};

extern const struct s_c_ui_element c_ui_element;

#endif
