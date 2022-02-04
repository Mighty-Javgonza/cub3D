/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_default_textures.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:16:37 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/03 15:28:29 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "textures.h"

void	create_default_textures(t_graphic_image **images, t_graphic_environment *ge)
{
	size_t			i;
	unsigned int	default_colors[4] = {0xFF0000, 0x00FF00, 0x0000FF, 0xFFFF00};
	
	i = 0;
	while (i < 4)
	{
		images[i] = malloc(sizeof(**images));
		*(images[i]) = new_graphic_image(ge, (t_pixpos){100, 100});
		images[i]->color = default_colors[i];
		clear_image(images[i]);
		i++;
	}
}
