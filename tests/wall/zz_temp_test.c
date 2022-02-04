/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:07:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/03 14:54:58 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	main()
{
	t_wall					wall;
	t_collider_texturizer	ct;

	wall = init_wall();
	ct = wall.texturizer;
	if (ct.texture_count == 0)
		return (-1);
	return (0);
}
