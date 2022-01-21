/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_check_length.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 12:45:51 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:51:05 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cformat_check_length(char *length_start)
{
	size_t	i;

	i = 0;
	while (ft_ischarset(length_start[i], LENGTH_SET))
		i++;
	return (i);
}
