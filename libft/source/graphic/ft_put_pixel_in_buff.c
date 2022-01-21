/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel_in_buff.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:03:40 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:46:44 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Hardware and software agnostic function to put a pixel of a color in a buffer
** to later be displayed in an image on the screen
*/

#ifdef USING_MLX

void	ft_put_pixel_in_buff(size_t x, size_t y, t_color color, t_gbuff *gbuff)
{
	ft_mlx_pixel_put(&gbuff->impl.mlx, (int)x, (int)y, color);
}

#endif
