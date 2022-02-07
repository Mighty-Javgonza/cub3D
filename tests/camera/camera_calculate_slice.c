/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:17:39 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 11:59:40 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <mlx.h>
#include "../../libft/libft.h"

int main()
{
	t_camera		cam;
	t_wall			w;
	t_ray_collider	rc;
	t_collision		col;

	w = init_wall();
	cam = init_camera();

	w.col.pos = (t_vector){3, 0};
	w.col.z_axis_pos = 2;

	rc = camera_pixel_to_ray(&cam, cam.res_x / 2 + 1);
	col = collide_ray_bound_collider(&rc, &w.col);
	print_vector(col.pos);

	t_wall_slice_painter slice;
	slice.dist_to_slice = vector_dist(cam.pos, col.pos);
	calculate_slice_z_offset(&slice, &cam, col);
	if (slice.z_start_in_screen > slice.z_end_in_screen)
		return (-1);
	return (0);
}
