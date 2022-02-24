/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collider_texturizer.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:38:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:39:49 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLIDER_TEXTURIZER_H
# define COLLIDER_TEXTURIZER_H

# include <stdlib.h>

typedef struct s_graphic_image	t_graphic_image;

typedef struct s_collider_texturizer
{
	size_t			texture_count;
	t_graphic_image	**textures;
}				t_collider_texturizer;

t_collider_texturizer	init_collider_texturizer(size_t	texture_count);
void					assign_textures(t_collider_texturizer *ct,
							t_graphic_image **images);
void					destroy_texturizer(t_collider_texturizer *texturizer);

#endif
