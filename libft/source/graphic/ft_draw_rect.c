/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_rect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:03:16 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 12:54:30 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_draw_rect(t_rect rect, t_gbuff *gbuff)
{
	size_t	xx;
	size_t	yy;

	yy = 0;
	while (yy < (size_t)rect.height)
	{
		xx = 0;
		while (xx < (size_t)rect.width)
		{
			ft_put_pixel_in_buff((size_t)rect.x + xx, (size_t)rect.y + yy, \
										gbuff->paint_color, gbuff);
			xx++;
		}
		yy++;
	}
}
