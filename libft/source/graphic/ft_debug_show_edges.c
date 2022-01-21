/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug_show_edges.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 12:09:23 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:43:58 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define V_EDGE_COLOR 0x00FF0000
#define H_EDGE_COLOR 0x0000FF00
#define VH_EDGE_COLOR 0x00FFFF00

t_color	decide_color(t_byte edge)
{
	if (edge == 1)
		return (H_EDGE_COLOR);
	if (edge == 2)
		return (V_EDGE_COLOR);
	if (edge == 3)
		return (VH_EDGE_COLOR);
	return (0);
}

void	ft_debug_show_edges(t_gbuff *gbuff)
{
	size_t	x;
	size_t	y;
	t_byte	*edges;
	t_byte	edge;
	t_color new_color;

	edges = ft_detect_edges(gbuff);
	y = 0;
	while (y < gbuff->res_y)
	{
		x = 0;
		while (x < gbuff->res_x)
		{
			edge = edges[x + y * gbuff->res_x];
			new_color = decide_color(edge);
			if (new_color != 0)
				ft_put_pixel_in_buff(x, y, new_color, gbuff);
			x++;
		}
		y++;
	}
}
