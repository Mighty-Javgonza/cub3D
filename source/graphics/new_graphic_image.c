/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_graphic_image.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:03:19 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/04 16:15:29 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

t_graphic_image	new_graphic_image(t_graphic_environment *ge, t_pixpos res)
{
	t_graphic_image	img;

	img = init_graphic_image();
	set_graphic_image_resolution(&img, ge, res);
	return (img);
}
