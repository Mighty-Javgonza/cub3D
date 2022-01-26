/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_image.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:13:31 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 17:19:27 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

void	clear_image(t_graphic_image *img)
{
	size_t	i;

	i = 0;
	while (i < img->res.x * img->res.y)
	{
		img->addr[i] = img->color;
		i++;
	}
}
