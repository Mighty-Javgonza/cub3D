/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_ui_window_add_element.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 13:09:37 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 10:17:46 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	mt_ui_window_add_element(t_ui_window *this, t_ui_element *element)
{
	ft_lstput_back(&this->ui_elements, element);
}
