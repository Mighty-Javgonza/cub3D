/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_column_in_image.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:42:07 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:54:20 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall_painter.h"
#include "../../graphics/graphics.h"

int	get_column_in_image(t_collision col, t_graphic_image *image)
{
	t_segment	collided_segment;
	t_vector	collision_point_in_segment;
	float		percent_segment;
	int			image_column;

	collided_segment = ((t_bound_collider *)col.target)
		->segments[col.target_id];
	collided_segment = add_segment_vector(collided_segment,
			((t_bound_collider *)col.target)->pos);
	collision_point_in_segment = col.pos;
	percent_segment = percent_in_segment(
			collided_segment, collision_point_in_segment);
	image_column = image->res.x * percent_segment / 100.0f;
	return (image_column);
}
