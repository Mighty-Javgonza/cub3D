/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_if_textures_and_colors_not_parsed.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:18:10 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:20:45 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "../error/error.h"

void	exit_if_textures_and_colors_not_parsed(t_map *map)
{
	if (all_textures_parsed(map) == 0)
		exit_and_message("Error on textures\n");
	if (all_colors_parsed(map) == 0)
		exit_and_message("Error on colors\n");
}
