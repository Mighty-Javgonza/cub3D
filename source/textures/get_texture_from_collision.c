/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_texture_from_collision.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:22:14 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 15:23:21 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "textures.h"

t_graphic_image	*get_texture_from_collision(t_collision col)
{
	t_wall	*wall;

	wall = ((t_bound_collider *)col.target)->parent_wall;
	return (wall->texturizer.textures[col.target_id]);
}
