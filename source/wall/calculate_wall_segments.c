/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_wall_segments.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:34:24 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:41:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall.h"

//TODO: Este algoritmo no funciona para las verticales

void	calculate_wall_segments(t_wall *wall)
{
	t_vector	top_left_corner;
	t_vector	top_right_corner;
	t_vector	bot_left_corner;
	t_vector	bot_right_corner;

	top_left_corner = (t_vector){-wall->width / 2, -wall->height / 2};
	bot_left_corner = (t_vector){-wall->width / 2, +wall->height / 2};
	bot_right_corner = (t_vector){+wall->width / 2, +wall->height / 2};
	top_right_corner = (t_vector){+wall->width / 2, -wall->height / 2};
	wall->col.segments[0] = (t_segment){top_left_corner, bot_left_corner};
	wall->col.segments[1] = (t_segment){bot_left_corner, bot_right_corner};
	wall->col.segments[2] = (t_segment){bot_right_corner, top_right_corner};
	wall->col.segments[3] = (t_segment){top_right_corner, top_left_corner};
	wall->col.segments[0] = add_segment_vector(wall->col.segments[0],
			(t_vector){-0.001, 0});
	wall->col.segments[1] = add_segment_vector(wall->col.segments[1],
			(t_vector){0, 0.001});
	wall->col.segments[2] = add_segment_vector(wall->col.segments[2],
			(t_vector){0.001, 0});
	wall->col.segments[3] = add_segment_vector(wall->col.segments[3],
			(t_vector){0, -0.001});
}
