/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 10:31:37 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:52:31 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if 0
static void	draw_test_rects(t_gbuff *gbuff)
{
	t_rect	rect;

	ft_set_color_gbuff(gbuff, 0x00000000);
	rect = ft_create_rect(0, 0, 400, 400);
	ft_draw_rect(rect, gbuff);
	ft_set_color_gbuff(gbuff, 0x00FFFFFF);
	rect = ft_create_rect(0, 0, 200, 200);
	ft_draw_rect(rect, gbuff);
}
#endif
int			main()
{
#if 0
	t_gbuff		gbuff;
	t_gserver	gserver;
	t_gwindow	gwin;
	
	gserver = ft_create_gserver();
	gwin = ft_create_window(400, 400, "Edge Detection", &gserver);
	gbuff = ft_create_gbuff(400, 400, &gserver);
	draw_test_rects(&gbuff);
	ft_debug_show_edges(&gbuff);
	ft_display_buff(&gbuff, &gwin);
	ft_gserver_begin_loop(&gserver);
#endif 
	return (0);
}
