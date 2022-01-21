/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_text_box_set_pos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 12:54:18 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/29 12:55:48 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	mt_text_box_set_pos(t_ui_element_text_box *this, size_t x, size_t y)
{
	this->element.pos_x = x;
	this->element.pos_y = y;
}
