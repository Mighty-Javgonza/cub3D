/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:09:16 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/15 16:07:50 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

static void	double_pointer_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static size_t	double_pointer_len(char **str)
{
	size_t	len;

	len = 0;
	while(str[len])
		len++;
	return (len);
}
int	validate_color(char *color)
{
	char	**color_components;
	size_t	len;
	size_t	i;
	int		color_component_value;

	color_components = ft_split(color, ',');
	len = double_pointer_len(color_components);
	if (len != 3)
		return (0);
	i = 0;
	while (i <len)
	{
		if (!ft_isint(color_components[i]))
		{
			double_pointer_free(color_components);
			return (0);
		}
		color_component_value = cub_atoi(color_components[i]);
		if (color_component_value < 0 || color_component_value > 255)
		{
			double_pointer_free(color_components);
			return (0);
		}
		i++;
	}
	double_pointer_free(color_components);
	return (1);
}
