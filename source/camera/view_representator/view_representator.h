/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_representator.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:14 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/20 12:53:58 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_REPRESENTATOR_H
# define VIEW_REPRESENTATOR_H

#include "../../graphics/graphics.h"

typedef struct s_view_representator
{
	unsigned int	*draw_buffer;
	t_resolution	res;
}				t_view_representator;


t_view_representator	init_view_representator();
#endif
