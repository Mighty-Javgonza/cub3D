/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.h.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:49:58 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 17:28:51 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMAP_H
# define MINIMAP_H

#include "../graphics.h"
#include "../../world/world.h"


typedef struct s_minimap
{
	t_graphic_environment	*ge;
	t_graphic_image			img;
	t_world					*world;
	t_pixpos				draw_pos;
	unsigned int			background;
}				t_minimap;

extern t_minimap	debug_minimap;

t_minimap	init_minimap(t_graphic_environment *ge, t_world *w);
void	minimap_display(t_minimap *mini);
void	minimap_paint_player(t_minimap *mp);
void	paint_minimap(t_minimap *mp);
void	paint_miniplayer(t_graphic_image *img, t_player *p);
void	paint_miniplayer_vision_cone(t_minimap *mp);
#endif
