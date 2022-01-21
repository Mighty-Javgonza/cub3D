/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:29:03 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 15:36:29 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int	main()
{
	t_ray_collider	rc;

	rc = init_ray_collider();
	if (rc.max_length != DEFAULT_RAY_COLLIDER_LENGTH)
		return (-1);
	return (0);
}
