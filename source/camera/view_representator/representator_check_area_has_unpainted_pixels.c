/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   representator_check_area_has_unpainted_pi          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:53:22 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:17:05 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"

int	representator_check_area_has_unpainted_pixels(t_view_representator *vr,
			t_bound_area area)
{
	t_pixpos	pos;

	pos = area.top_left;
	while (pos.y < area.bot_right.y)
	{
		pos.x = area.top_left.x;
		while (pos.x < area.bot_right.x)
		{
			if (pos.x >= vr->res.x || pos.y >= vr->res.y)
				return (0);
			if (!representator_check_pixel_is_painted(vr, pos))
				return (1);
			pos.x++;
		}
		pos.y++;
	}
	return (0);
}
