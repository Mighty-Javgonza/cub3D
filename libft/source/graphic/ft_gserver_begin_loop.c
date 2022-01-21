/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gserver_begin_loop.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 12:01:41 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:48:14 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation agnostic function to start the loop on a server
** (and receive input from the user)
*/

#ifdef USING_MLX

# include <mlx.h>

void	ft_gserver_begin_loop(t_gserver *server)
{
	mlx_loop(server->impl.mlx);
}

#endif
