/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_view_representator_resolution.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:32:56 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 14:20:04 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"
#include "../../error/error.h"

void	set_view_representator_resolution(t_view_representator *vr, t_resolution res)
{
	if (vr->draw_buffer != NULL)
		destroy_view_representator(vr);
	vr->draw_buffer = malloc(sizeof(*vr->draw_buffer) * res.x * res.y);
	if (!vr->draw_buffer)
		exit_and_message("Couldn't allocate draw buffer\n");
	vr->res = res;
	vr->plane.width = DEFAULT_PLANE_WIDTH;
	vr->plane.height = vr->plane.width * res.y / res.x;
}
