/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_graphic.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 10:53:28 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 17:01:50 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_GRAPHIC_H
# define LIBFT_GRAPHIC_H

# include "../../type_defs.h"
//# include "bezier.h"

typedef struct		s_mlximage
{
	void			*img;
	char			*addr;
	int				bits_per_pixel;
	int				line_length;
	int				endian;
}					t_mlximage;

/*
** Definition for an implementation agnostic graphics buff
*/

typedef union		u_gspecific
{
	t_mlximage		mlx;
}					t_gspecific;

typedef struct		s_gbuff
{
	t_gspecific		impl;
	size_t			res_x;
	size_t			res_y;
	t_color			paint_color;
}					t_gbuff;

typedef struct		s_mlx_window
{
	void			*mlx;
	void			*win;
}					t_mlx_window;

/*
** Definition for an implementation agnostic graphics window
*/

typedef union		u_wspecific
{
	t_mlx_window	mlx;
}					t_wspecific;

typedef struct		s_gwindow
{
	t_wspecific		impl;
	char			*name;
}					t_gwindow;

/*
** Definition for an implementation agnostic graphics server
*/

typedef union		u_serspecific
{
	void			*mlx;
}					t_serspecific;

typedef struct		s_gserver
{
	t_serspecific	impl;
}					t_gserver;

void				ft_mlx_pixel_put(t_mlximage *img, int x, int y, int color);
t_color				ft_mlx_get_pixel(size_t x, size_t y, t_mlximage *img);
unsigned int		ft_average_colors(unsigned int *colors, size_t color_count);
t_color				ft_color_brightness(t_color color, double brightness);
t_color				ft_add_colors(t_color c1, t_color c2);
void				ft_put_pixel_in_buff(size_t x, size_t y, \
										t_color color, t_gbuff *gbuff);
t_color				ft_get_buff_pixel(size_t x, size_t y, t_gbuff *gbuff);
void				ft_display_buff(t_gbuff *buff, t_gwindow *window);
t_gbuff				ft_create_gbuff(size_t res_x, size_t res_y, \
									t_gserver *handler);
t_gwindow			ft_create_window(size_t res_x, size_t res_y, \
									char *name, t_gserver *handler);
t_gserver			ft_create_gserver();
void				ft_gserver_begin_loop();

void				ft_set_color_gbuff(t_gbuff *gbuff, t_color new_color);
//void				ft_draw_rect(t_rect rect, t_gbuff *gbuff);
//void				ft_draw_bezier(t_quad_bezier, t_gbuff *gbuff);

t_byte				*ft_detect_edges(t_gbuff *gbuff);
void				ft_debug_show_edges(t_gbuff *gbuff);

#endif
