/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_get_pixel.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 12:37:02 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:39:30 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_color	ft_mlx_get_pixel(size_t x, size_t y, t_mlximage *img)
{
	char	*init;

	init = img->addr + ((y * img->line_length + x) * (img->bits_per_pixel / 8));
	return (*(t_color *)init);
}
