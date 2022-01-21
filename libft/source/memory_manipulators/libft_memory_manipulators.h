/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_memory_manipulators.h                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:00:58 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/26 12:31:23 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEMORY_MANIPULATORS_H
# define LIBFT_MEMORY_MANIPULATORS_H

typedef unsigned long	t_size_t;

int			ft_memcmp(const void *s1, const void *s2, t_size_t n);
int			ft_strlcpy(char *dst, const char *src, t_size_t size);
void		ft_bzero(void *s, t_size_t n);
void		*ft_calloc(int nmemb, t_size_t size);
void		*ft_memchr(const void *s, int c, t_size_t n);
void		*ft_memcpy(void *dest, const void *src, t_size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, t_size_t n);
void		*ft_memmove(void *dest, const void *src, t_size_t n);
void		*ft_memset(void *s, int c, t_size_t n);
void		*ft_smalloc(size_t msize, void (*shutdown)(char *, int), int code);

#endif
