/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_camera_buffer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:05:16 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/21 14:58:38 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "camera.h"
#include "../../libft/libft.h"
#include "../world/world.h"

void	clear_camera_buffer(t_camera *cam, t_world *world)
{		
	clear_representator(&cam->representator);
	paint_representator_background(&cam->representator, world);
}
