/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_brightness.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:15:07 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/22 12:10:27 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Accepts a color and a number from 0 to 1 and returns the resulting color
*/

t_color	ft_color_brightness(t_color color, double brightness)
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;

	r = (color >> 16);
	g = (color >> 8);
	b = (color);
	r = (unsigned char)(r * brightness);
	g = (unsigned char)(g * brightness);
	b = (unsigned char)(b * brightness);
	return (r << 16 | g << 8 | b);
}
