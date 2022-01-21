/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 09:46:36 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 12:57:41 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** File to string
** Returns a string object
*/

#include <stdio.h>

struct s_string	ft_ftos(const char *path)
{
	struct s_string rvalue;
	char			*rbuff;
	int				fd;
	int				rr;

	rbuff = malloc(sizeof(*rbuff) * (BUFFER_SIZE + 1));
	rvalue = c_string.new("");
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		printf("ERROR\n");
		printf("This test must be executed from base folder\n");
	}
	rr = BUFFER_SIZE;
	while (rr == BUFFER_SIZE)
	{
		rr = read(fd, rbuff, BUFFER_SIZE);
		rbuff[rr] = '\0';
		rvalue.append_p(&rvalue, rbuff, -1);
	}
	free(rbuff);
	return (rvalue);
}
