/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:13:24 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/21 11:21:55 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"

int main()
{
	t_bound_collider	bc;
	size_t				sc;

	sc = 3;
	bc = init_bound_collider(sc);
	if (bc.segment_count != sc)
		return -1;
	return 0;
}
