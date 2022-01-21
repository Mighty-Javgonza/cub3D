/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_average_colors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 10:52:39 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/22 11:08:57 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_graphic.h"

unsigned int	ft_average_colors(unsigned int *colors, size_t color_count)
{
	size_t			i;
	unsigned int	r_comp;
	unsigned int	g_comp;
	unsigned int	b_comp;

	r_comp = 0;
	g_comp = 0;
	b_comp = 0;
	i = 0;
	while (i < color_count)
	{
		r_comp += (colors[i] & 0x00FF0000) >> 16;
		g_comp += (colors[i] & 0x0000FF00) >> 8;
		b_comp += (colors[i] & 0x000000FF);
		i++;
	}
	r_comp = (r_comp / color_count) << 16;
	g_comp = (g_comp / color_count) << 8;
	b_comp = (b_comp / color_count);
	return (r_comp | g_comp | b_comp);
}
