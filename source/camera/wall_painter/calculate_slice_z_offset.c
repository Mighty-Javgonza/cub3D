/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_z_offset.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:01:00 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 11:00:36 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall_painter.h"
#include "../camera.h"

static void	set_start_in_screen(t_bound_collider *collider, t_camera *cam,
			t_wall_slice_painter *slice, float distance_scale)
{
	float				collider_top;
	float				collider_top_at_plane;
	float				p;
	float				plane_middle;
	float				plane_top;

	plane_top = (cam->z_axis_pos + camera_get_plane_height(cam) / 2);
	plane_middle = cam->z_axis_pos;
	collider_top = (collider->z_axis_pos + collider->z_axis_height)
		- cam->z_axis_pos;
	collider_top_at_plane = collider_top * distance_scale;
	p = proportion_between(plane_middle, plane_top, collider_top_at_plane);
	slice->z_start_in_screen = (camera_get_res_y(cam) / 2)
		- (p * camera_get_res_y(cam) / 2);
}

static void	set_end_in_screen(t_bound_collider *collider, t_camera *cam,
			t_wall_slice_painter *slice, float distance_scale)
{
	float				collider_bottom;
	float				collider_bottom_at_plane;
	float				p;
	float				plane_middle;
	float				plane_top;

	plane_top = (cam->z_axis_pos + camera_get_plane_height(cam) / 2);
	plane_middle = cam->z_axis_pos;
	collider_bottom = collider->z_axis_pos - cam->z_axis_pos;
	collider_bottom_at_plane = collider_bottom * distance_scale;
	p = proportion_between(plane_middle, plane_top, collider_bottom_at_plane);
	slice->z_end_in_screen = (camera_get_res_y(cam) / 2)
		- (p * camera_get_res_y(cam) / 2);
}

void	calculate_slice_z_offset(t_wall_slice_painter *slice, t_camera *cam,
			t_collision col)
{
	t_bound_collider	*collider;
	float				distance_scale;

	collider = col.target;
	distance_scale = camera_get_plane_distance(cam) / slice->dist_to_slice;
	set_end_in_screen(collider, cam, slice, distance_scale);
	set_start_in_screen(collider, cam, slice, distance_scale);
	slice->height_in_screen = slice->z_end_in_screen - slice->z_start_in_screen;
}
