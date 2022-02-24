/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   door.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:28:27 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:43:02 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOR_H
# define DOOR_H

# include "../wall.h"

# define DOOR_STATE_CLOSED 0
# define DOOR_STATE_OPENING 1
# define DOOR_STATE_OPENED 2
# define DOOR_STATE_CLOSING 3
# define DOOR_DEFAULT_SPEED 0.05
//# define DOOR_DEFAULT_CLOSING_DIRECTION (t_vector){1, 0}

typedef struct s_linear_door
{
	t_wall		*wall;
	int			state;
	t_vector	opening_direction;
	float		speed;
	float		displacement;
	float		objective_displacement;
}				t_linear_door;

t_linear_door	init_linear_door(void);
void			start_opening_linear_door(t_linear_door *door);
void			update_linear_door(t_linear_door *door);
void			start_closing_linear_door(t_linear_door *door);
#endif
