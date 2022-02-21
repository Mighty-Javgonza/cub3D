/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_segment_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:06:34 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 14:14:38 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"

t_camera_range	get_segment_range(t_camera *cam, t_segment segment, t_vector pos)
{
	t_segment		segment_as_seen_from_camera;
	t_camera_range	range;
	int				start_pixel;
	int				end_pixel;

	segment_as_seen_from_camera = segment;
	segment_as_seen_from_camera = add_segment_vector(segment_as_seen_from_camera, pos);
	segment_as_seen_from_camera = sub_segment_vector_vfirst(segment_as_seen_from_camera, cam->pos);
	start_pixel = camera_point_to_camera_pixel(cam, segment_as_seen_from_camera.p1);
	end_pixel = camera_point_to_camera_pixel(cam, segment_as_seen_from_camera.p2);
	if (start_pixel > end_pixel)
	{
		range.start = end_pixel;
		range.end = start_pixel;
	}
	else
	{
		range.start = start_pixel;
		range.end = end_pixel;
	}
	return (range);
}
