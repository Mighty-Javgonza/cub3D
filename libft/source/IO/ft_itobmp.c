/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 09:27:35 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/27 11:13:41 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_io.h"

/*
** Writes a bmp imaage from an array of ints
*/

int	write_header2(int fd)
{
	unsigned int	temp;
	int				i;

	i = -1;
	temp = 11811;
	write(fd, (char *)(&temp), 4);
	write(fd, (char *)(&temp), 4);
	write(fd, (char *)(&temp), 4);
	write(fd, (char *)(&temp), 4);
	write(fd, "\0\0\0\0", 4);
	write(fd, "\0\0\0\0", 4);
	write(fd, "\0\0\0\0", 4);
	temp = 0x00FFFF00;
	write(fd, (char *)(&temp), 4);
	while (i++ < 3)
		write(fd, "\0\0\0\0", 4);
	write(fd, "\0\0\0\0\0\0\0\0", 8);
	write(fd, "\0\0\0\0\0\0\0\0", 8);
	write(fd, "\0\0\0\0\0\0\0\0", 8);
	temp = 512;
	write(fd, (char *)(&temp), 4);
	write(fd, "\0\0\0\0\0\0\0\0", 8);
	write(fd, "\0\0\0\0\0\0\0\0", 8);
	write(fd, "\0\0\0\0\0\0\0\0", 8);
	return (0);
}

int	write_header(int fd, int rx, int ry)
{
	unsigned int	file_size;
	unsigned int	temp;
	unsigned short	temp2;

	file_size = (rx * ry * 3) + 14 + 124;
	write(fd, "BM", 2);
	write(fd, (char *)(&file_size), 4);
	write(fd, "\0\0\0\0", 4);
	temp = 14 + 124;
	write(fd, (char *)&(temp), 4);
	temp = 124;
	write(fd, (char *)(&temp), 4);
	write(fd, (char *)(&rx), 4);
	write(fd, (char *)(&ry), 4);
	temp2 = 1;
	write(fd, (char *)(&temp2), 2);
	temp2 = 32;
	write(fd, (char *)(&temp2), 2);
	write(fd, "\0\0\0\0", 4);
	write(fd, "\0\0\0\0", 4);
	return (write_header2(fd));
}

int	*flip_data(int *data, unsigned short res_x, unsigned short res_y)
{
	int				*rvalue;
	unsigned short	x;
	unsigned short	y;

	rvalue = malloc(sizeof(int) * res_x * res_y);
	x = 0;
	y = 0;
	while (y < res_y)
	{
		x = 0;
		while (x < res_x)
		{
			rvalue[x + (res_y - y - 1) * res_x] = data[x + y * res_x];
			x++;
		}
		y++;
	}
	return (rvalue);
}

int	ft_itobmp(int *data, unsigned short res_x, unsigned short res_y, \
				char *file_name)
{
	int	fd;
	int	*data_flipped;

	data_flipped = flip_data(data, res_x, res_y);
	fd = open(file_name, O_WRONLY | O_APPEND | O_CREAT, 0777);
	write_header(fd, res_x, res_y);
	write(fd, (char *)data_flipped, res_x * res_y * sizeof(int));
	close(fd);
	free(data_flipped);
	return (1);
}
