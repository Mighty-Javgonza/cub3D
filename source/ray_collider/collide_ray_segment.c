/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collide_ray_segment.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:15:35 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 18:59:16 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_collider.h"

t_collision	collide_ray_segment(t_ray_collider *ray, t_segment *segment)
{
	t_collision	col;
	t_segment	ray_segment;

	ray_segment = ray_to_segment(ray);
	col = collide_segments(&ray_segment, segment);
	return (col);
}
