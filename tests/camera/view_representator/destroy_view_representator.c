/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:44:32 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 13:19:22 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"

int	main()
{
	t_view_representator	vr;

	vr = init_view_representator();
	destroy_view_representator(&vr);
	return (0);
}
