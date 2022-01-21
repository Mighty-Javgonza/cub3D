/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detect_edges.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 10:27:22 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:44:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns an array of edges
** 0: no edge
** 1: Horizontal edge
** 2: Vertical edge
** 3: Both edges
*/

#define EDGE_CHANGE_THRESHOLD 100
#define HORIZONTAL_EDGE 1
#define VERTICAL_EDGE 2

static int	get_abs_color_diff(t_color c1, t_color c2)
{
	int		r_diff;
	int		g_diff;
	int		b_diff;

	r_diff = (int)((c1 & 0x00FF0000) >> 16) - (int)((c2 & 0x00FF0000) >> 16);
	g_diff = (int)((c1 & 0x0000FF00) >> 8) - (int)((c2 & 0x0000FF00) >> 8);
	b_diff = (int)((c1 & 0x000000FF)) - (int)((c2 & 0x000000FF));
	if (r_diff < 0)
		r_diff = -r_diff;
	if (g_diff < 0)
		g_diff = -g_diff;
	if (b_diff < 0)
		b_diff = -b_diff;
	return (r_diff + g_diff + b_diff);
}

static int	detect_horizontal_edge(size_t x, size_t y, t_gbuff *gbuff)
{
	t_color	c1;
	t_color	c2;

	c1 = ft_get_buff_pixel(x, y, gbuff);
	c2 = ft_get_buff_pixel(x + 1, y, gbuff);
	if (get_abs_color_diff(c1, c2) > EDGE_CHANGE_THRESHOLD)
		return (HORIZONTAL_EDGE);
	return (0);
}

static int	detect_vertical_edge(size_t x, size_t y, t_gbuff *gbuff)
{
	t_color	c1;
	t_color	c2;

	c1 = ft_get_buff_pixel(x, y, gbuff);
	c2 = ft_get_buff_pixel(x, y + 1, gbuff);
	if (get_abs_color_diff(c1, c2) > EDGE_CHANGE_THRESHOLD)
		return (VERTICAL_EDGE);
	return (0);
}

t_byte		*ft_detect_edges(t_gbuff *gbuff)
{
	t_byte	*rvalue;
	size_t	x;
	size_t	y;
	t_byte	edge;

	rvalue = malloc(sizeof(*rvalue) * gbuff->res_x * gbuff->res_y);
	ft_memset(rvalue, 0, gbuff->res_x * gbuff->res_y);
	y = 0;
	while (y < gbuff->res_y - 1)
	{
		x = 0;
		while (x < gbuff->res_x - 1)
		{
			edge = 0;
			edge = detect_horizontal_edge(x, y, gbuff);
			rvalue[x + y * gbuff->res_x] |= edge;
			rvalue[(x + 1) + y * gbuff->res_x] |= edge;
			edge = detect_vertical_edge(x, y, gbuff);
			rvalue[x + y * gbuff->res_x] |= edge;
			rvalue[x + (y + 1) * gbuff->res_x] |= edge;
			x++;
		}
		y++;
	}
	return (rvalue);
}
