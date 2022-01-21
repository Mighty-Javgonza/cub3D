/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui_element_class.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:34:50 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 10:30:52 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static t_ui_element 		new(size_t pos_x, size_t pos_y, t_gbuff *buff)
{
	t_ui_element	rvalue;

	rvalue = (t_ui_element) {
		.pos_x = pos_x,
		.pos_y = pos_y,
		.gbuff = buff,
	};
	return (rvalue);
}

const struct s_c_ui_element	c_ui_element = {.new = &new};
