/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_segment.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:42:21 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:50 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"
#include <stdio.h>

void	print_segment(t_segment	s)
{
	printf("p1 ");
	print_vector_data(s.p1);
	printf("     p2 ");
	print_vector_data(s.p2);
	printf("\n");
}
