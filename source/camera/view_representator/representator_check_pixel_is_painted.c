/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   representator_check_pixel_is_painted.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:08:20 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 13:13:15 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"
#include <stdbool.h>

bool	representator_check_pixel_is_painted(t_view_representator *vr, t_pixpos pos)
{
	size_t	address;

	address = representator_address_from_pixpos(vr, pos);
	return (vr->painted_pixels[address]);
}
