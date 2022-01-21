/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_gserver.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 11:38:40 by javgonza          #+#    #+#             */
/*   Updated: 2021/02/02 12:45:18 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation agnostic function to create a graphics handling server
*/

#ifdef USING_MLX

# include <mlx.h>

t_gserver	ft_create_gserver(void)
{
	t_gserver		rvalue;
	t_serspecific	specific;

	specific.mlx = mlx_init();
	rvalue.impl = specific;
	return (rvalue);
}

#endif
