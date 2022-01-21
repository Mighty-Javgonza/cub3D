/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_ui_window_clean.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 11:00:27 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 11:17:01 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Draws the background color in all the screen
*/

void	mt_ui_window_clean(t_ui_window *this)
{
	t_rect	rect;

	ft_set_color_gbuff(&this->gbuff, this->back_color);
	rect = ft_create_rect(0, 0, this->res_x, this->res_y);
	ft_draw_rect(rect, &this->gbuff);
}
