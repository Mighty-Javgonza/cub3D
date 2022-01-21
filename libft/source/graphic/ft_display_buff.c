/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_buff.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 10:22:10 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:45:39 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Hardware and software implementation agnostic function to
** show a gbuff on screen
*/

#ifdef USING_MLX

# include <mlx.h>

void	ft_display_buff(t_gbuff *gbuff, t_gwindow *window)
{
	mlx_put_image_to_window(window->impl.mlx.mlx, window->impl.mlx.win, \
							gbuff->impl.mlx.img, 0, 0);
}

#endif
