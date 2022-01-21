/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bezier.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 12:45:21 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 10:35:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
#if 0
	t_gserver		gserver;
	t_gwindow		gwin;
	t_gbuff			gbuff;
	t_quad_bezier	bezier;

	gserver = ft_create_gserver();
	gwin = ft_create_window(400, 400, "Bezier test", &gserver);
	gbuff = ft_create_gbuff(400, 400, &gserver);
	bezier = (t_quad_bezier) {
		.p1 = ft_vector(100, 100, 0),
		.p2 = ft_vector(200, 350, 0),
		.p3 = ft_vector(300, 200, 0),
	};
	ft_set_color_gbuff(&gbuff, 0x00FFFFFF);
	ft_draw_bezier(bezier, &gbuff);
	ft_display_buff(&gbuff, &gwin);
	ft_gserver_begin_loop(&gserver);
#endif
	return (0);
}
