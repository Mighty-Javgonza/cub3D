/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:05:48 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/10 14:24:55 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H
# define DEFAULT_PLAYER_SPEED 0.1
# define DEFAULT_PLAYER_ROTATION_SPEED 0.03

#include "../camera/camera.h"
#include "../mac_keys.h"

typedef struct s_player
{
	t_camera	cam;
	float		speed;
	float		rotation_speed;
	// Usar position de la camara
	unsigned int	move_right:1;
	unsigned int	move_left:1;
	unsigned int	move_forwards:1;
	unsigned int	move_backwards:1;
	unsigned int	rotate_left:1;
	unsigned int	rotate_right:1;
}				t_player;


t_player	init_player(void);

void	player_move_right(t_player *player);

void	player_move_left(t_player *player);

void	player_move_down(t_player *player);
void	player_move_up(t_player *player);
int	player_movement(int keycode, t_player *player);

void	player_rotate_left(t_player *player);

void	player_rotate_right(t_player *player);

void	player_move_up_z(t_player *player);

void	player_move_down_z(t_player *player);

void	destroy_player(t_player *player);



int	player_movement_release(int keycode, t_player *player);
void	player_update_movement(t_player *player);
#endif
