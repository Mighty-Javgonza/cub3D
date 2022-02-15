/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_world_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:28:45 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 18:44:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"
#include <stdio.h>

int	validate_world_line(char *line)
{
	char	*location_of_first_invalid_char;

	location_of_first_invalid_char = ft_strcharset_n(line, VALID_MAP_CHARS);	
	if (location_of_first_invalid_char == NULL)
		return (1);
	return (0);
}
