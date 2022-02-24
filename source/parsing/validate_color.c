/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:09:16 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/22 16:05:30 by javgonza         ###   ########.fr       */
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
	while (str[len])
		len++;
	return (len);
}

static int	check_component_is_smaller_than_255(char *component)
{
	int		color_component_value;

	if (!ft_isint(component))
		return (0);
	color_component_value = cub_atoi(component);
	if (color_component_value < 0 || color_component_value > 255)
		return (0);
	return (1);
}

int	validate_color(char *color)
{
	char	**color_components;
	size_t	len;
	size_t	i;

	color_components = ft_split(color, ',');
	len = double_pointer_len(color_components);
	if (len != 3)
		return (0);
	i = 0;
	while (i < len)
	{
		if (check_component_is_smaller_than_255(color_components[i]) == 0)
		{
			double_pointer_free(color_components);
			return (0);
		}
		i++;
	}
	double_pointer_free(color_components);
	return (1);
}
