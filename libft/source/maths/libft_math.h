/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:01:51 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/23 10:43:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_H
# define LIBFT_MATH_H

# include <math.h>
# include "geometry.h"

typedef	struct	s_rect
{
	double		x;
	double		y;
	double		width;
	double		height;
}				t_rect;

int				ft_pow(int b, int e);
int				ft_count_digits(long long int n, int base);
int				ft_ucount_digits(unsigned long long int n, int base);

t_vector		ft_vector(double x, double y, double z);
double			ft_dist(t_point p1, t_point p2);
t_matrix3		ft_orthogonal_vectors(t_vector vector, double tilt);
t_vector		ft_unit_vector(t_vector vector);
double			ft_vlength(t_vector vector);
t_vector		ft_vsum(t_vector v1, t_vector v2);
t_vector		ft_vsub(t_vector v1, t_vector v2);
t_vector		ft_vmult(t_vector v, double sf);
t_vector		ft_vvmult(t_vector v1, t_vector v2);
t_vector		ft_vdiv(t_vector v, double div);
double			ft_vdot(t_vector v1, t_vector v2);
t_vector		ft_vcross(t_vector v1, t_vector v2);
t_vector		ft_vpointto(t_point p1, t_point p2);

int				ft_atoi(const char *nptr);
double			ft_atod(const char *d);
char			*ft_itoa(int n);
char			*ft_itoa_base(long long int n, unsigned int base);
char			*ft_utoa_base(long long int n, unsigned int base);

double			ft_max_d(double v1, double v2);
double			ft_min_d(double v1, double v2);
double			ft_abs_d(double value);
double			ft_const_d(double value, double lbound, double ubound);
unsigned int	ft_const_u(unsigned int value, \
							unsigned int lbound, unsigned int ubound);
int				ft_const_i(int value, int lower_bound, int upper_bound);

t_vector		ft_abs_v(t_vector vector);
t_vector		ft_neg_v(t_vector vector);
t_vector		ft_max_v(t_vector v1, t_vector v2);

t_matrix3		ft_matrix3(t_vector r1, t_vector r2, t_vector r3);
t_matrix3		ft_matrix3r(t_vector iloc, t_vector jloc, t_vector zloc);
t_matrix3		ft_miden3();
t_vector		ft_mrow(t_matrix3 m, int row);
t_matrix3		ft_mmult(t_matrix3 m1, t_matrix3 m2);
t_matrix3		ft_minv(t_matrix3 matrix);
t_vector		ft_apply_matrix3(t_vector vector, t_matrix3 matrix);
t_vector		ft_local_vector(t_vector v, t_matrix3 m);
double			ft_det3(t_matrix3 m);
t_matrix3		ft_maddrow(t_matrix3 m, int rowi, t_vector row, double factor);

t_rect			ft_create_rect(double x, double y, double width, double height);

#endif
