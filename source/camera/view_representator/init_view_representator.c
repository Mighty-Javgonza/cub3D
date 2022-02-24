/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_view_representator.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:46:45 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:15:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"
#include <stdlib.h>

t_view_representator	init_view_representator(void)
{
	t_view_representator	rvalue;

	rvalue = (t_view_representator)
	{
		.draw_buffer = NULL,
		.plane = init_view_plane(),
		.color = 0xFF0000,
		.painted_pixels_count = 0,
	};
	return (rvalue);
}
