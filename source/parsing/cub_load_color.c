/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_color.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:55:53 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 12:54:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include "../../libft/libft.h"

/*
** Gets an input of type char * in format (A),R,G,B [0-255]
** and returns a t_color
*/

t_color	cub_load_color(char *str)
{
	char	**spl;
	t_color	rvalue;
	char	*ptr;
	int		i;

	spl = ft_split(str, ',');
	rvalue = 0x00000000;
	i = 0;
	ptr = spl[i];
	while (ptr != (void *)0)
	{
		rvalue = rvalue << 8;
		rvalue += cub_atoi(ptr);
		free(ptr);
		i++;
		ptr = spl[i];
	}
	free(ptr);
	free(spl);
	return (rvalue);
}
