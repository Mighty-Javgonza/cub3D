/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_representator.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:14 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 18:03:04 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_REPRESENTATOR_H
# define VIEW_REPRESENTATOR_H

#include "../../graphics/graphics.h"
#include <stdbool.h>

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
	t_resolution	res;
	unsigned int	*draw_buffer;
	bool			*painted_pixels;
	size_t			painted_pixels_count;
	t_view_plane	plane;
	unsigned int	color;
}				t_view_representator;

typedef struct s_world	t_world;

t_view_representator	init_view_representator();
unsigned int	view_representator_get_pixel(t_view_representator *vr, t_pixpos pixel);
t_view_plane	init_view_plane();

void	destroy_view_representator(t_view_representator *vr);
void	set_view_representator_resolution(t_view_representator *vr, t_resolution res);



void	paint_representator_background(t_view_representator *r, t_world *w);

int	pixel_in_representator_bounds(t_view_representator *vr, int pixel);

unsigned int	representator_get_pixel(t_view_representator *vr, t_pixpos pos);
void	representator_paint_pixel(t_view_representator *vr, t_pixpos pos);

bool	representator_check_pixel_is_painted(t_view_representator *vr, t_pixpos pos);
size_t	representator_address_from_pixpos(t_view_representator *vr, t_pixpos pos);

void	clear_representator(t_view_representator *vr);

int	representator_check_area_has_unpainted_pixels(t_view_representator *vr, t_bound_area area);
#endif
