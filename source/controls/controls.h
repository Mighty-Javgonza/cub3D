/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:52:00 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 15:28:11 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTROLS_H
# define CONTROLS_H

# include "../player/player.h"
# include "../graphics/graphics.h"

typedef struct s_global_environment
{
	t_world					*world;
	t_graphic_environment	*ge;
}	t_global_environment;

void	hook_controls(t_global_environment *global);
int		close_win(t_global_environment *global);
void	hook_events(t_global_environment *global);
int		player_controls(int keycode, t_global_environment *global);

#endif
