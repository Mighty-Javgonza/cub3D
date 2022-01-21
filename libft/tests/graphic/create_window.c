/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_window.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 11:52:10 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 10:36:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>
int main()
{
#if 0
	t_gserver	gserver;
	t_gwindow	gwindow;
	t_gwindow	gwindow2;
	t_gbuff		buff1;
	t_gbuff		buff2;

	gserver = ft_create_gserver();
	gwindow = ft_create_window(400, 400, "Test OK", &gserver);
	gwindow2 = ft_create_window(500, 400, "Test OK2", &gserver);
	buff1 = ft_create_gbuff(400, 400, &gserver);
	buff2 = ft_create_gbuff(500, 400, &gserver);
	ft_set_color_gbuff(&buff1, 0x00FF0000);
	ft_draw_rect(ft_create_rect(0, 0, 100, 100), &buff1);
	ft_set_color_gbuff(&buff2, 0x0000FF00);
	ft_draw_rect(ft_create_rect(0, 0, 100, 100), &buff2);
	ft_display_buff(&buff1, &gwindow);
	ft_display_buff(&buff2, &gwindow2);
	printf("THIS TEST DOES NOT RETURN PLEASE Ctrl-C Manually\n");
	ft_gserver_begin_loop(&gserver);
	return (0);
#endif
}
