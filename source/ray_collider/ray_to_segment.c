/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_to_segment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:17:22 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 15:14:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_collider.h"
#include <stdio.h>
#include "../cub_math/cub_math.h"

t_segment	ray_to_segment(t_ray_collider *ray)
{
	t_segment	seg;
	t_vector	p2;

	seg.p1 = ray->origin;
	p2 = (t_vector){ray->direction.x * ray->max_length, ray->direction.y * ray->max_length};
	seg.p2 = add_vectors(ray->origin, p2);
	return (seg);
}
