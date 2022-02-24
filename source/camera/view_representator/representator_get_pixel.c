/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   representator_get_pixel.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:05:57 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:15:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"

unsigned int	representator_get_pixel(t_view_representator *vr, t_pixpos pos)
{
	size_t	address;

	address = representator_address_from_pixpos(vr, pos);
	return (vr->draw_buffer[address]);
}
