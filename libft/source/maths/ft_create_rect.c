/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_rect.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:39:39 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/23 11:06:30 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_rect	ft_create_rect(double x, double y, double width, double height)
{
	t_rect	rvalue;

	rvalue = (t_rect) {
		.x = x,
		.y = y,
		.width = width,
		.height = height
	};
	return (rvalue);
}
