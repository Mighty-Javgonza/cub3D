/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str_manipulators.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 13:56:41 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:37:01 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_MANIPULATORS_H

# define LIBFT_STR_MANIPULATORS_H

size_t		ft_strlen(const char *s);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		ft_strtoupper(char *s);
void		ft_strtolower(char *s);
int			ft_strlcat(char *dst, const char *src, t_size_t n);
int			ft_strlcpy(char *dst, const char *src, t_size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strcharset(const char *s, char *set);
char		*ft_strcharset_n(const char *s, char *set);
char		*ft_strncharset(const char *s, char *set, size_t n);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, t_size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
void		ft_freesplit(char **split);
char		*ft_strmapi(char *s, char (*f)(unsigned int, char));
char		*ft_strnstr(const char *big, const char *little, t_size_t len);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
