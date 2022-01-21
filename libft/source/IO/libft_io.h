/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_io.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 09:59:11 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 10:08:12 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IO_H
# define LIBFT_IO_H
# include "get_next_line.h"
# include <fcntl.h>
# include <sys/stat.h>
# include <stdlib.h>
# include <unistd.h>

void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
int				ft_itobmp(int *data, unsigned short res_x, \
							unsigned short res_y, char *file_name);
struct s_string	ft_ftos(const char *path);

#endif
