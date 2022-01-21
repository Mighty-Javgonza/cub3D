/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_ui_window_draw.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 12:32:13 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 11:00:20 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void mt_ui_window_draw(t_ui_window *this)
{
	t_list			*list_element;
	t_ui_element	*ui_element;

	this->clean(this);
	list_element = this->ui_elements;
	while (list_element->next != 0)
	{
		list_element = list_element->next;
		ui_element = list_element->content;
		ui_element->draw(ui_element);
	}
	ft_display_buff(&this->gbuff, &this->gwin);
}
