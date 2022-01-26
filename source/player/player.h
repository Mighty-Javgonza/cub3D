/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:05:48 by javgonza          #+#    #+#             */
/*   Updated: 2022/01/26 16:11:53 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H
# define DEFAULT_PLAYER_SPEED 0.1

#include "../camera/camera.h"
#include "../mac_keys.h"

typedef struct s_player
{
	t_camera	cam;
	float		speed;
	// Usar position de la camara
}				t_player;


t_player	init_player(void);

void	player_move_right(t_player *player);

void	player_move_left(t_player *player);

void	player_move_down(t_player *player);
void	player_move_up(t_player *player);
int	player_movement(int keycode, t_player *player);
#endif
