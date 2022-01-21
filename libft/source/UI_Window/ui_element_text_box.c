/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_element_text_box.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:42:45 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 11:02:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static t_ui_element_text_box new(t_gbuff *buff)
{
	t_ui_element_text_box	rvalue;
	t_ui_element			base;

	base = c_ui_element.new(0, 0, buff);
	base.draw = mt_text_box_draw;
	rvalue = (t_ui_element_text_box) {
		.element = base,
		.width = 100,
		.height = 10,
		.text = "",
		.back_color = 0x00000000,
		.fore_color = 0x00FFFFFF,
		.border_color = 0x00888888,
		.border_width = 0,
		.set_pos = mt_text_box_set_pos,
		.set_dims = mt_text_box_set_dimensions,
		.draw = mt_text_box_draw,
	};
	rvalue.element.parent = &rvalue;
	return (rvalue);
}

const struct s_c_ui_element_text_box c_uielem_text_box = {.new = new};
