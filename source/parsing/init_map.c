/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:41:25 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 18:23:20 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "../../libft/libft.h"

t_map	init_map(char *path)
{
	t_map	map;

	map = (t_map){
		.path = path,
		.valid = 0,
		.world_buffer = 0,
	};
	ft_memset(map.parsed_textures, 0, 4);
	return (map);
}
