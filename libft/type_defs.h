/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_defs.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:01:37 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 12:27:02 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_DEFS_H
# define TYPE_DEFS_H

typedef unsigned char			t_byte;
typedef unsigned int			t_uint;
typedef unsigned long int		t_ulint;
typedef unsigned long long int	t_ullint;
typedef unsigned short int		t_usint;

typedef union					u_all_types
{
	char						c;
	char						*s;
	void						*p;
	int							i;
	short int					si;
	long int					li;
	long long int				lli;
	t_uint						u;
	t_ulint						ul;
	t_ullint					ull;
	t_usint						us;
	long double					ld;
}								t_all_types;

typedef unsigned int			t_color;

#endif
