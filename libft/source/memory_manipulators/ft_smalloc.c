/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_secure_malloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:05:08 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/26 12:26:51 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** A safer version of malloc with shutdown if things go wrong
** You have to provide a pointer to the function to shutdown the program
** if the malloc fails as well as the number that represents a malloc
** error in your code
*/

void	*ft_smalloc(size_t msize, void (*shutdown)(char *, int), int code)
{
	void	*rvalue;

	rvalue = malloc(msize);
	if (rvalue == 0)
	{
		if (shutdown != 0)
			shutdown("Malloc error", code);
		else
			exit(code);
	}
	return (rvalue);
}
