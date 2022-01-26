/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_miniplayer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:33:54 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 19:02:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

void	paint_miniplayer(t_graphic_image *img, t_player *p)
{
	t_rectangle	player_rect;
	float		miniplayer_size;

	miniplayer_size = 0.2;
	player_rect.size.x = miniplayer_size;
	player_rect.size.y = miniplayer_size;
	player_rect.pos.x = p->cam.pos.x - miniplayer_size / 2;
	player_rect.pos.y = p->cam.pos.y - miniplayer_size / 2;
	paint_rect(img, player_rect);
}
