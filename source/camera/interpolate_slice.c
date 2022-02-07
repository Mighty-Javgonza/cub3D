/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpolate_slice.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:36:13 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/07 12:33:59 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include <stdio.h>

t_wall_slice_painter	interpolate_slice(t_wall_slice_painter start_slice, t_wall_slice_painter end_slice, size_t max_value, size_t value)
{
	t_wall_slice_painter	result;

	result.z_start_in_screen = interpolate_int(start_slice.z_start_in_screen, end_slice.z_start_in_screen, max_value, value);
	result.z_end_in_screen = interpolate_int(start_slice.z_end_in_screen, end_slice.z_end_in_screen, max_value, value);
	result.height_in_screen = result.z_end_in_screen - result.z_start_in_screen;
	result.column_in_image = interpolate_int(start_slice.column_in_image, end_slice.column_in_image, max_value, value);
	return (result);
}
