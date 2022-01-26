/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_collider.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:29:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 19:38:41 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_COLLIDER_H
# define RAY_COLLIDER_H

# include "../cub_math/cub_math.h"
# include "../wall/wall.h"
//# include "../world/world.h"

# define DEFAULT_RAY_COLLIDER_LENGTH 30

typedef struct s_camera	t_camera;
typedef struct s_world	t_world;

typedef struct s_ray_collider
{
	t_vector	origin;
	t_vector	direction;
	double		max_length;
}				t_ray_collider;

t_ray_collider	init_ray_collider();
t_collision	calculate_ray_collider_wall_collision(t_ray_collider *rc, t_wall *wall);


t_collision	collide_ray_segment(t_ray_collider *ray, t_segment *segment);
t_segment	ray_to_segment(t_ray_collider *ray);

t_collision	collide_ray_bound_collider(t_ray_collider *ray, t_bound_collider *bc);

t_collision	collide_ray_world(t_ray_collider *rc, t_world *world);
#endif
