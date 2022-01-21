/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   geometry.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:05:19 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:05:52 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GEOMETRY_H
# define GEOMETRY_H

typedef struct		s_vector
{
	double			x;
	double			y;
	double			z;
}					t_vector;

typedef t_vector	t_point;

typedef struct		s_matrix3
{
	t_vector		iloc;
	t_vector		jloc;
	t_vector		kloc;
}					t_matrix3;

typedef struct		s_matrix2
{
	double			a;
	double			b;
	double			c;
	double			d;
}					t_matrix2;

#endif
