/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paint_minimap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:21:19 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 19:05:58 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

void	paint_minimap(t_minimap *mp)
{
	mp->img.color = mp->background;
	clear_image(&mp->img);
	paint_world(&mp->img, mp->world);
	minimap_paint_player(mp);
}
