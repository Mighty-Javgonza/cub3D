/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_bound_collider.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:21:19 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 13:22:32 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bound_collider.h"

void	destroy_bound_collider(t_bound_collider *col)
{
	free(col->segments);
}
