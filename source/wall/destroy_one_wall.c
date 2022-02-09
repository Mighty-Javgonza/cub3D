/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_one_wall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:17:48 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 13:19:51 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wall.h"

void	destroy_one_wall(t_wall *wall)
{
	destroy_bound_collider(&wall->col);
	destroy_texturizer(&wall->texturizer);
}
