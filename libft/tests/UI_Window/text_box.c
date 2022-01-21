/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text_box.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 11:34:12 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 11:16:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	t_gserver				gserver;
	t_ui_window				ui_win;
	t_ui_element_text_box	text_box;

	gserver = ft_create_gserver();
	ui_win = c_ui_win.new(400, 400, "TEST OK", &gserver);

	text_box = c_uielem_text_box.new(&ui_win.gbuff);
	text_box.element.parent = &text_box;
	text_box.set_pos(&text_box, 100, 100);
	text_box.set_dims(&text_box, 200, 70);
	text_box.back_color = 0x101010;
	text_box.border_width = 3;

	ui_win.add(&ui_win, &text_box.element);
	ui_win.draw(&ui_win);
	
	ft_gserver_begin_loop(&gserver);
	return (0);
}
