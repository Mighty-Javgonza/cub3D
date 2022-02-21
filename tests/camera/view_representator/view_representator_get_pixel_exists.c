/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:44:32 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 14:35:27 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"

int	main()
{
	t_view_representator	vr;
	unsigned int			color;

	vr = init_view_representator();
	set_view_representator_resolution(&vr, (t_pixpos){10, 10});
	color = representator_get_pixel(&vr, (t_pixpos){4, 4});
	return (0);
}
