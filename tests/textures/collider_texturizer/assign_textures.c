/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:38:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/03 15:12:44 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"

int	main()
{
	t_collider_texturizer	ct;
	size_t					texture_count;
	t_graphic_image			*images[4];

	texture_count = 4;
	images[0] = (void *)1;
	ct = init_collider_texturizer(texture_count);
	assign_textures(&ct, images);
	if (ct.textures[0] != (void *)1)
		return (-1);
	return (0);
}
