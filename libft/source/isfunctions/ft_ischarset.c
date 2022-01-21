/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 18:07:12 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/18 10:06:49 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ischarset(char c, char *set)
{
	int	i;

	i = 0;
	while (*(set + i) != '\0')
	{
		if (c == *(set + i))
			return (1);
		i++;
	}
	return (0);
}
