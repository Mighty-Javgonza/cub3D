/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_representator_get_pixel.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:12:38 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 13:16:28 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"
#include "../../error/error.h"

unsigned int	view_representator_get_pixel(t_view_representator *vr, t_pixpos pixel)
{
	if (pixel.x > vr->res.x || pixel.x < 0)
		exit_and_message("View representator cannot acces x pixel\n");
	if (pixel.y > vr->res.x || pixel.y < 0)
		exit_and_message("View representator cannot acces y pixel\n");
	return (vr->draw_buffer[pixel.x + pixel.y * vr->res.x]);
}
