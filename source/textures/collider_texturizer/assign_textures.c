/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_textures.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:05:01 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/03 16:07:34 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collider_texturizer.h"
#include <stdio.h>

void	assign_textures(t_collider_texturizer *ct, t_graphic_image **images)
{
	size_t	i;

	i = 0;
	while (i < ct->texture_count)
	{
		ct->textures[i] = images[i];
		i++;
	}
}
