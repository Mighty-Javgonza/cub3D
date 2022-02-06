/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_image_from_png.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:39:43 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/06 11:40:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

t_graphic_image	*new_image_from_png(t_graphic_environment *ge, char *path)
{
	t_graphic_image	*image;

	image = malloc(sizeof(*image));
	*image = graphic_image_from_png(ge, path);
	return (image);
}
