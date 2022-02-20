/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:20:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 12:28:15 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_MATH_H
# define CUB_MATH_H

#include <stdlib.h>

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
	void			*target;
	size_t			target_id;
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

typedef struct s_int_range
{
	int	start;
	int	end;
}				t_int_range;

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

float	percent_in_segment(t_segment s, t_vector p);

t_vector	vector_divided_float(t_vector v, float div);

float	proportion_between(float low_bound, float up_bound, float value);

float	interpolate_float(float max_val, float min_val, size_t step_count, size_t step);
int	interpolate_int(int min_val, int max_val, size_t step_count, size_t step);

float	interpolate_float(float min_val, float max_val, size_t step_count, size_t step);
float	vector_dot(t_vector v1, t_vector v2);

int	int_is_in_range(int bound1, int bound2, int value);


t_segment	sub_segment_vector(t_segment s, t_vector v);

t_segment	sub_segment_vector_vfirst(t_segment s, t_vector v);

float	distance_to_closest_segment_end(t_segment segment, t_vector pos);

size_t	*sort_float_array(float *values, size_t array_length);

void	swap_size_t(size_t *first, size_t *second);

int	cub_atoi(char *str);
#endif
