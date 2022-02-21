/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_view_representator.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:46:45 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 14:18:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"
#include <stdlib.h>

t_view_representator	init_view_representator()
{
	t_view_representator	rvalue;

	rvalue = (t_view_representator)
	{
		.draw_buffer = NULL,
		.plane = init_view_plane(),
	};
	return (rvalue);
}
