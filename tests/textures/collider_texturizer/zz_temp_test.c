/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:38:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/03 15:47:57 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"

int	main()
{
	t_collider_texturizer	ct;
	size_t					texture_count;
	t_graphic_environment	ge;
	t_graphic_image			**images;

	ge = init_graphic_environment((t_pixpos){100, 100});
	images = malloc(sizeof(*images) * 4);
	create_default_textures(images, &ge);
	texture_count = 4;
	ct = init_collider_texturizer(texture_count);
	assign_textures(&ct, images);
	if (ct.textures[0]->addr[0] != 0xff0000)
		return (-1);
	return (0);
}
