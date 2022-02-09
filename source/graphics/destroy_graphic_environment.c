/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_graphic_environment.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:52:52 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:22:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"
#include <mlx.h>

void	destroy_graphic_environment(t_graphic_environment *ge)
{
	mlx_destroy_window(ge->mlx, ge->win);
	destroy_graphic_image(&ge->draw_buffer, ge->mlx);
}
