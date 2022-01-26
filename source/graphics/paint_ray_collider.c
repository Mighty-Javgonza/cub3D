/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_ray_collider.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:34:38 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/25 17:41:02 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

void	paint_ray_collider(t_graphic_image *img, t_ray_collider *rc)
{
	t_segment	tmp;

	img->color = 0x00FF00;
	tmp = ray_to_segment(rc);
	paint_segment(img, &tmp);
}
