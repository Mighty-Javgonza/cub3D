/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_buff_pixel.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:34:27 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:48:32 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Hardware and software agnostic implementation to get
** data of a pixel from a gbuff
*/

#ifdef USING_MLX

t_color	ft_get_buff_pixel(size_t x, size_t y, t_gbuff *gbuff)
{
	return (ft_mlx_get_pixel(x, y, &gbuff->impl.mlx));
}

#endif
