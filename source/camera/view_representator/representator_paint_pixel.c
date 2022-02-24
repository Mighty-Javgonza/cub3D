/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   representator_paint_pixel.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:04:59 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:15:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"

void	representator_paint_pixel(t_view_representator *vr, t_pixpos pos)
{
	size_t	address;

	address = representator_address_from_pixpos(vr, pos);
	vr->draw_buffer[address] = vr->color;
	vr->painted_pixels[address] = 1;
	vr->painted_pixels_count++;
}
