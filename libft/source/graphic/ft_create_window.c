/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 11:12:20 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/30 10:34:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation agnostic function to create a window
*/

#ifdef USING_MLX

# include <mlx.h>

t_gwindow	ft_create_window(size_t res_x, size_t res_y, char *name, \
								t_gserver *handler)
{
	t_gwindow	rvalue;
	t_wspecific	specific;

	specific.mlx.mlx = handler->impl.mlx;
	specific.mlx.win = mlx_new_window(handler->impl.mlx, res_x, res_y, name);
	rvalue.impl = specific;
	rvalue.name = ft_strdup(name);
	return (rvalue);
}

#endif
