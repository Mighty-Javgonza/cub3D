/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segment_segment_collider_decide_collision          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:56:16 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/20 18:07:08 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub_math.h"

void	segment_segment_collider_decide_collision(t_segment_segment_collider *col)
{
	col->exists = ((col->col_factor_s0 >= 0) && (col->col_factor_t0 <= 1));
}
