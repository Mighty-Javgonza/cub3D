/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_z_offset.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:01:00 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 12:40:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall_painter.h"
#include "../camera.h"
#include <stdio.h>

void	calculate_slice_z_offset(t_wall_slice_painter *slice, t_camera *cam, t_collision col)
{
	t_bound_collider	*collider;
	float				collider_top;
	float				collider_bottom;
	float				collider_bottom_at_plane;
	float				collider_top_at_plane;
	float				distance_scale;
	float				plane_bottom;
	float				plane_top;
	float				plane_middle;
	float				p;

	collider = col.target;

	plane_top = (cam->z_axis_pos + cam->plane_height / 2);
	plane_bottom = (cam->z_axis_pos - cam->plane_height / 2);
	plane_middle = cam->z_axis_pos;
	distance_scale = cam->plane_distance / slice->dist_to_slice;
	
	collider_bottom = collider->z_axis_pos - cam->z_axis_pos;
	collider_bottom_at_plane = collider_bottom * distance_scale;
	p = proportion_between(plane_middle, plane_top, collider_bottom_at_plane);
	slice->z_end_in_screen = (cam->res_y / 2) - (p * cam->res_y / 2);

	collider_top = (collider->z_axis_pos + collider->z_axis_height) - cam->z_axis_pos;
	collider_top_at_plane = collider_top * distance_scale;
	p = proportion_between(plane_middle, plane_top, collider_top_at_plane);
	slice->z_start_in_screen = (cam->res_y / 2) - (p * cam->res_y / 2) ;

	slice->height_in_screen = slice->z_end_in_screen - slice->z_start_in_screen;
}
