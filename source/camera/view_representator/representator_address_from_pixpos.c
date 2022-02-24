/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   representator_compute_address_from_pixpos          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:09:13 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:16:39 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "view_representator.h"

size_t	representator_address_from_pixpos(t_view_representator *vr,
			t_pixpos pos)
{
	return (pos.x + pos.y * vr->res.x);
}
