/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:44:32 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 14:57:13 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"

int	main()
{
	t_view_representator	vr;
	int						is_painted;

	vr = init_view_representator();
	set_view_representator_resolution(&vr, (t_pixpos){10, 10});
	representator_paint_pixel(&vr, (t_pixpos){3, 4});
	clear_representator(&vr);
	is_painted = representator_check_pixel_is_painted(&vr, (t_pixpos){3, 4});
	if (is_painted) 
		return (-1);
	return (0);
}
