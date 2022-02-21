/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:44:32 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 14:34:47 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"

int	main()
{
	t_view_representator	vr;
	unsigned int			color;

	vr = init_view_representator();
	set_view_representator_resolution(&vr, (t_pixpos){10, 10});
	vr.color = 0xaaFF00;
	representator_paint_pixel(&vr, (t_pixpos){3, 4});
	color = representator_get_pixel(&vr, (t_pixpos){3, 4});
	if (color != 0xaaFF00) 
		return (-1);
	return (0);
}
