/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_default_textures.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:26:48 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/03 16:29:22 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.h"

void	assign_default_textures(t_world *w, t_graphic_image **images)
{
	size_t	i;

	i = 0;
	while (i < w->wall_count)
	{
		assign_textures(&w->walls[i].texturizer, images);
		i++;
	}
}
