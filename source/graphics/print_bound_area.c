/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bound_area.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:58:08 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 17:59:17 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"
#include <stdio.h>

void	print_bound_area(t_bound_area area)
{
	printf("x:%zu y:%zu - - x:%zu y:%zu\n", area.top_left.x, area.top_left.y, area.bot_right.x, area.bot_right.y);
}
