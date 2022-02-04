/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_collider_texturizer.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:50:16 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/03 14:55:59 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collider_texturizer.h"
#include "../../graphics/graphics.h"

t_collider_texturizer	init_collider_texturizer(size_t	texture_count)
{
	t_collider_texturizer	rvalue;

	rvalue = (t_collider_texturizer)
	{
		.texture_count = texture_count,
		.textures = malloc(sizeof(*rvalue.textures) * texture_count),
	};
	return (rvalue);
}
