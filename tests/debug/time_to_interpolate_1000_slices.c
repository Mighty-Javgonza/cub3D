/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_to_interpolate_100_slices.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:54:15 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/16 12:26:12 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tests.h"
#include <stdio.h>
#include <sys/time.h>

static void	compute_and_display_time_difference(struct timeval before, struct timeval after)
{
	struct timeval	diff;

	diff.tv_sec = after.tv_sec - before.tv_sec;
	if (before.tv_usec <= after.tv_usec)
		diff.tv_usec = after.tv_usec - before.tv_usec;
	else
	{
		diff.tv_usec = after.tv_usec - before.tv_usec + 1000000;
		diff.tv_sec--;
	}
	printf("test_time: %lds %dus\n", diff.tv_sec, diff.tv_usec);
}

int	main()
{
	t_wall_slice_painter	slice1;
	t_wall_slice_painter	slice2;

	slice1 = (t_wall_slice_painter){10, 10, 10, 40, 6, 30, 30};
	slice2 = (t_wall_slice_painter){8, 8, 12, 36, 7, 40, 100};

	struct timeval	before;	
	struct timeval	after;	

	gettimeofday(&before, NULL);
	for (int i = 0; i < 1920; i++)
		interpolate_slice(slice1, slice2, 1920, i);
	gettimeofday(&after, NULL);
	compute_and_display_time_difference(before, after);
}
