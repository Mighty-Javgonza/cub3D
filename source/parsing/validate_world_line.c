/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_world_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:28:45 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:37:14 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	validate_world_line(char *line)
{
	char	*location_of_first_invalid_char;

	location_of_first_invalid_char = ft_strcharset_n(line, VALID_MAP_CHARS);	
	if (location_of_first_invalid_char == NULL)
		return (1);
	return (0);
}
