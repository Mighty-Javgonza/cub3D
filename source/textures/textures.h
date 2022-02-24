/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:37:10 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:38:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTURES_H
# define TEXTURES_H
# include "../graphics/graphics.h"

void			create_default_textures(t_graphic_image **images,
					t_graphic_environment *ge);
t_graphic_image	*get_texture_from_collision(t_collision col);
#endif
