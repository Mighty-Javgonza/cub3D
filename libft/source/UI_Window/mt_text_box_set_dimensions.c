/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_text_box_set_pos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 12:54:18 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/29 12:56:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	mt_text_box_set_dimensions(t_ui_element_text_box *this, \
									size_t width, size_t height)
{
	this->width = width;
	this->height = height;
}
