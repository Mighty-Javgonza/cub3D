/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:05:48 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:24:27 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H
# define DEFAULT_PLAYER_SPEED 0.05
# define DEFAULT_PLAYER_RUN_INCREASE 2
# define DEFAULT_PLAYER_ROTATION_SPEED 0.015
# define DEFAULT_PLAYER_HEIGHT 0.5
# define DEFAULT_PLAYER_JUMP_FORCE 0.05
# define GRAVITY 0.0035

# include "../camera/camera.h"
# include "../mac_keys.h"

// Usar position de la camara
typedef struct s_player
{
	t_camera		cam;
	float			speed;
	float			run_increase;
	float			rotation_speed;
	float			jump_force;
	float			vertical_speed;
	float			original_height;
	float			breathing_offset;
	float			breathing_speed;
	float			height;
	unsigned int	in_air:1;
	unsigned int	move_right:1;
	unsigned int	move_left:1;
	unsigned int	move_forwards:1;
	unsigned int	move_backwards:1;
	unsigned int	rotate_left:1;
	unsigned int	rotate_right:1;
	unsigned int	moving:1;
	unsigned int	running:1;
}				t_player;

t_player	init_player(void);
void		player_move_right(t_player *player);
void		player_move_left(t_player *player);
void		player_move_down(t_player *player);
void		player_move_up(t_player *player);
int			player_movement(int keycode, t_player *player);
void		player_rotate_left(t_player *player);
void		player_rotate_right(t_player *player);
void		player_move_up_z(t_player *player);
void		player_move_down_z(t_player *player);
void		destroy_player(t_player *player);
int			player_movement_release(int keycode, t_player *player);
void		player_update_movement(t_player *player);
void		player_jump(t_player *player);
void		player_run(t_player *player);
void		player_stop_running(t_player *player);

#endif
