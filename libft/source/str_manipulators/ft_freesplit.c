/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freesplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:58:40 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/27 13:02:06 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str_manipulators.h"
#include <stdlib.h>
#include <stdio.h>

/*
** Frees a malloced split char **
*/

void	ft_freesplit(char **split)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = split[i];
	while (ptr != (void *)0)
	{
		free(ptr);
		i++;
		ptr = split[i];
	}
	free(ptr);
	free(split);
}
