/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap_paint_player.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:42:21 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 19:16:35 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

void	minimap_paint_player(t_minimap *mp)
{
	mp->img.color = 0xff0000;
	paint_miniplayer(&mp->img, &mp->world->player);
	mp->img.color = 0x0070b59a;
	paint_miniplayer_vision_cone(mp);
}
