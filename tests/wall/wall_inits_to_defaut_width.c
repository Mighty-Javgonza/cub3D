/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:07:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 15:24:50 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	main()
{
	t_wall	wall;

	wall  = init_wall();
	if (wall.width != DEFAULT_WALL_WIDTH || wall.height != DEFAULT_WALL_HEIGHT)
		return (-1);
	return (0);
}
