/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_representator.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:14 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 18:55:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_REPRESENTATOR_H
# define VIEW_REPRESENTATOR_H

#include "../../graphics/graphics.h"

# define	DEFAULT_PLANE_WIDTH 5
# define	DEFAULT_PLANE_DISTANCE 2

typedef struct s_view_plane
{
	float			distance;
	float			width;
	float			height;
}				t_view_plane;

typedef struct s_view_representator
{
	unsigned int	*draw_buffer;
	t_resolution	res;
	t_view_plane	plane;
}				t_view_representator;

typedef struct s_world	t_world;

t_view_representator	init_view_representator();
unsigned int	view_representator_get_pixel(t_view_representator *vr, t_pixpos pixel);
t_view_plane	init_view_plane();

void	destroy_view_representator(t_view_representator *vr);
void	set_view_representator_resolution(t_view_representator *vr, t_resolution res);



void	paint_representator_background(t_view_representator *r, t_world *w);
#endif
