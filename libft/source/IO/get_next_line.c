/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 12:42:57 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/24 15:40:12 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	*buff[1024];
	int			rvalue;
	char		*ptr;
	char		*pos_nl;

	if (!buff[fd])
		buff[fd] = ft_strdup("");
	rvalue = read_to_newline(buff, fd);
	if (rvalue == -1)
		return (-1);
	pos_nl = find_newline(buff[fd]);
	if (pos_nl == 0)
	{
		*line = ft_strdup(buff[fd]);
		ptr = buff[fd];
		buff[fd] = ft_strdup("");
		free(ptr);
		return (0);
	}
	*pos_nl = '\0';
	*line = ft_strdup(buff[fd]);
	ptr = buff[fd];
	buff[fd] = ft_strdup(pos_nl + 1);
	free(ptr);
	return (1);
}

int	read_to_newline(char **buff, int fd)
{
	char			*temp_buff;
	char			*res_ptr;
	long long int	rvalue;
	char			*ptr;

	rvalue = BUFFER_SIZE;
	if (find_newline(buff[fd]) != 0)
		return (rvalue);
	res_ptr = ft_strdup("");
	temp_buff = ft_strdup("");
	while (find_newline(res_ptr) == 0 && rvalue == BUFFER_SIZE)
	{
		rvalue = read_once(fd, &temp_buff);
		if (!temp_buff)
			return (-1);
		ptr = res_ptr;
		res_ptr = ft_strjoin(res_ptr, temp_buff);
		free(ptr);
	}
	free(temp_buff);
	ptr = buff[fd];
	buff[fd] = ft_strjoin(ptr, res_ptr);
	free(ptr);
	free(res_ptr);
	return (rvalue);
}

char	*find_newline(char *s)
{
	char	*ptr;

	if (s == (void *)0 || *s == '\0')
		return (0);
	ptr = s;
	while (*ptr != '\0')
	{
		if (*ptr == '\n')
			return (ptr);
		ptr++;
	}
	return (0);
}

int	read_once(int fd, char **temp_buff)
{
	int		rvalue;

	free(*temp_buff);
	rvalue = BUFFER_SIZE;
	*temp_buff = malloc(BUFFER_SIZE + 1);
	if (!(*temp_buff))
		return (0);
	rvalue = read(fd, *temp_buff, BUFFER_SIZE);
	if (rvalue < 0)
		return (-1);
	(*temp_buff)[rvalue] = '\0';
	return (rvalue);
}
