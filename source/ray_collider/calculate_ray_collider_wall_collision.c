/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_ray_collider_wall_collision.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:47:52 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 13:00:34 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ray_collider.h"

#include "../wall/wall.h"

t_collision	calculate_ray_collider_wall_collision(t_ray_collider *rc, t_wall *wall)
{
	return (collide_ray_bound_collider(rc, &wall->col));	
}
