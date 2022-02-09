/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_list_to_wall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:44:04 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 13:35:06 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "world.h"

void	add_list_of_wall(t_world *w, t_list *coordinate_walls)
{
	t_vector	*wall_pos;

	while (coordinate_walls)
	{
		wall_pos = coordinate_walls->content;
		add_wall(w, *wall_pos);
		coordinate_walls = coordinate_walls->next;
	}	
}
