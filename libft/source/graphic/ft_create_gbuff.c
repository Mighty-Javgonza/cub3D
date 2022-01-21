/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_gbuff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 11:27:52 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:50:20 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation agnostic function to create a t_gbuff
*/

#ifdef USING_MLX

# include <mlx.h>

t_gbuff	ft_create_gbuff(size_t res_x, size_t res_y, t_gserver *handler)
{
	t_gbuff		rvalue;
	t_gspecific	img;

	img.mlx = (t_mlximage) {
		.img = mlx_new_image(handler->impl.mlx, (int)res_x, (int)res_y),
		.bits_per_pixel = 32,
		.line_length = res_x,
		.endian = 1,
	};
	img.mlx.addr = mlx_get_data_addr(img.mlx.img, &img.mlx.bits_per_pixel, \
								&img.mlx.line_length, &img.mlx.endian);
	img.mlx.bits_per_pixel = 32;
	img.mlx.line_length = res_x;
	img.mlx.endian = 1;
	rvalue = (t_gbuff) {
		.impl = img,
		.res_x = res_x,
		.res_y = res_y,
		.paint_color = 0,
	};
	return (rvalue);
}

#endif
