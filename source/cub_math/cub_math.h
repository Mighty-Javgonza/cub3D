/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:20:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 17:49:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_MATH_H
# define CUB_MATH_H

typedef struct s_vector
{
	float	x;
	float	y;
}				t_vector;

typedef struct s_segment
{
	t_vector	p1;
	t_vector	p2;
}				t_segment;

typedef struct s_collision
{
	unsigned int	exists : 1;
	t_vector		pos;
	float			dist;
}				t_collision;

typedef struct s_rectangle
{
	t_vector	pos;
	t_vector	size;
}				t_rectangle;

typedef struct s_segment_segment_collider
{
	unsigned int	exists : 1;
	t_segment		*s1;
	t_segment		*s2;
	float			factor_a;
	float			factor_b;
	t_vector		d1;
	t_vector		d2;
	t_vector		collision_point;
}				t_segment_segment_collider;

t_vector	init_vector();
t_segment	init_segment();
t_segment_segment_collider	init_segment_segment_collider();
void	calculate_segment_segment_collision(t_segment_segment_collider *col);
void	calculate_segment_segment_collision_factors(t_segment_segment_collider *col);
void	segment_segment_collider_decide_collision(t_segment_segment_collider *col);
void	calculate_segment_segment_collision_point(t_segment_segment_collider *col);
t_collision	collide_segments(t_segment *s1, t_segment *s2);


void	print_segment(t_segment	s);
void	print_vector(t_vector v);
void	print_vector_data(t_vector v);

t_segment	add_segment_vector(t_segment segment, t_vector pos);
t_vector	add_vectors(t_vector v1, t_vector v2);

float	vector_dist(t_vector v1, t_vector v2);

t_vector	vector_times_float(t_vector v, float mult);

t_vector	get_perp_vector(t_vector v);

float	vector_length(t_vector v);
t_vector	vector_normalize(t_vector v);

t_vector	sub_vectors(t_vector v1, t_vector v2);
#endif
