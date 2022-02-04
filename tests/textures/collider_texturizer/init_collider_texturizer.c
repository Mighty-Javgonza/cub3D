/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:38:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/03 14:32:14 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"

int	main()
{
	t_collider_texturizer	ct;
	size_t					texture_count;

	texture_count= 4;
	ct = init_collider_texturizer(texture_count);
	if (ct.texture_count != texture_count)
		return (-1);
	return (0);
}
