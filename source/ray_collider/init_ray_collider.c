/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ray_collider.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:33:59 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:36:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_collider.h"

t_ray_collider	init_ray_collider(void)
{
	t_ray_collider	rvalue;

	rvalue = (t_ray_collider)
	{
		.origin = init_vector(),
		.direction = init_vector(),
		.max_length = DEFAULT_RAY_COLLIDER_LENGTH,
	};
	return (rvalue);
}
