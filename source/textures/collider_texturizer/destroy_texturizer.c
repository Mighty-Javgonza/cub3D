/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_texturizer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:22:49 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 13:25:28 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collider_texturizer.h"

void	destroy_texturizer(t_collider_texturizer *texturizer)
{
	free(texturizer->textures);	
}
