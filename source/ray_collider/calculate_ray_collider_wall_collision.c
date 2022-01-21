/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_ray_collider_wall_collision.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:47:52 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 18:48:17 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_collider.h"

#include "../wall/wall.h"

t_collision	calculate_ray_collider_wall_collision(t_ray_collider *rc, t_wall *wall)
{
	t_collision	col;
	t_vector	top_left_corner;
	t_vector	bot_left_corner;
	t_segment	left;
	t_segment	ray_segment;

	top_left_corner = (t_vector){wall->pos.x - 0.5, wall->pos.y - 0.5};
	bot_left_corner = (t_vector){wall->pos.x - 0.5, wall->pos.y + 0.5};
	left = (t_segment){top_left_corner, bot_left_corner};
	ray_segment.p1 = rc->origin;
	ray_segment.p2.x = rc->origin.x + rc->direction.x * rc->max_length;
	ray_segment.p2.y = rc->origin.y + rc->direction.y * rc->max_length;
	print_segment(ray_segment);
	col = collide_segments(&ray_segment, &left);
	return (col);	
}
