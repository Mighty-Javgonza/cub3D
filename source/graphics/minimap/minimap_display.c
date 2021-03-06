/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap_display.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:25:18 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 12:58:40 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minimap.h"
#include "../graphics.h"

void	minimap_display(t_minimap *mini)
{
	display_image(mini->ge, &mini->img, mini->draw_pos);
}
