/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_pixel_put.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:14:11 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/29 11:26:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_mlx_pixel_put(t_mlximage *img, int x, int y, int color)
{
	char	*dst;

	dst = img->addr + ((y * img->line_length + x) * (img->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}
