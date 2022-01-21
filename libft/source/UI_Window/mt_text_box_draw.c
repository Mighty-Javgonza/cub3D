/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_text_box_draw.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:56:22 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 11:17:00 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

static void	draw_background(t_ui_element_text_box *this)
{
	t_rect	rect;
	int		bw;

	bw = this->border_width;
	ft_set_color_gbuff(this->element.gbuff, this->back_color);
	rect = ft_create_rect(this->element.pos_x + bw, this->element.pos_y\
			+ bw, this->width - bw * 2, this->height - bw * 2);
	ft_draw_rect(rect, this->element.gbuff);
}

static void	draw_border(t_ui_element_text_box *this)
{
	t_rect	rect;

	ft_set_color_gbuff(this->element.gbuff, this->border_color);
	rect = ft_create_rect(this->element.pos_x, this->element.pos_y, \
								this->width, this->height);
	ft_draw_rect(rect, this->element.gbuff);
}

#if 0
static void	draw_text(t_ui_element_text_box *this)
{
	t_mlx_window	win;

	win = this->element.win;
	mlx_string_put(win.mlx, win.win, this->element.x, this->element.y, this->fore, this->text);
}
#endif

void		mt_text_box_draw(t_ui_element *elem)
{
	t_ui_element_text_box	*this;

	this = elem->parent;
 printf("%p\n", elem->gbuff);
	draw_border(this);
	draw_background(this);
}
