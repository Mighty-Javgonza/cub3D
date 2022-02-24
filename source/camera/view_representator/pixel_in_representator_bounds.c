/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_in_representator_bound.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:23:14 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:15:24 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"

int	pixel_in_representator_bounds(t_view_representator *vr, int pixel)
{
	if (pixel < 0 || pixel >= (int)vr->res.x)
		return (0);
	return (1);
}
