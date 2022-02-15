/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:28:28 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/11 17:44:18 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../tests.h"

int	main()
{
	t_linear_door	door;

	door = init_linear_door();
	start_opening_linear_door(&door);
	if (door.state != DOOR_STATE_OPENING)
		return (-1);
	return (0);
}
