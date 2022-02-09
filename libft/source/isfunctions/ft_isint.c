/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 13:10:21 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:16:47 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if the string is entirely composed of digits from 1-9
*/

int	ft_isint(char *i)
{
	char	*ptr;

	ptr = i;
	if (*ptr == '-')
		ptr++;
	while (*ptr != '\0')
	{
		if (!ft_isdigit(*ptr))
			return (0);
		ptr++;
	}
	return (1);
}
