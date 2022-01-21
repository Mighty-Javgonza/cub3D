/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <javgonza@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 13:03:27 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:34:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(int nmemb, size_t size)
{
	void	*rvalue;
	size_t	fullsize;
	char	*ptr;
	size_t	control;

	fullsize = size * nmemb;
	rvalue = malloc(fullsize);
	if (rvalue == (void *)0)
		return ((void *)0);
	control = 0;
	while (control < fullsize)
	{
		ptr = (char *)(rvalue + control);
		*ptr = 0;
		control++;
	}
	return (rvalue);
}
