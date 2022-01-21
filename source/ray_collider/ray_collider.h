/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_collider.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:29:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 18:14:25 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_COLLIDER_H
# define RAY_COLLIDER_H

# include "../cub_math/cub_math.h"
# include "../wall/wall.h"

# define DEFAULT_RAY_COLLIDER_LENGTH 10

typedef struct s_ray_collider
{
	t_vector	origin;
	t_vector	direction;
	double		max_length;
}				t_ray_collider;

t_ray_collider	init_ray_collider();


t_collision	calculate_ray_collider_wall_collision(t_ray_collider *rc, t_wall *wall);

#endif
