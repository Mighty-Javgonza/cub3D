/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:28:22 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/28 11:09:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_CLASS_H
# define STRING_CLASS_H

# include <stdlib.h>

struct				s_string
{
	size_t			length;
	char			*s;

	void			(*append)(struct s_string *this, \
							struct s_string *new, size_t pos);
	void			(*append_p)(struct s_string *this, \
							char *new, size_t pos);
	void			(*append_pp)(struct s_string *this, \
							char *new, size_t length, size_t pos);
	void			(*append_chars)(struct s_string *this, \
							char c, size_t count, size_t pos);
	void			(*delete)(struct s_string *this, \
							size_t pos, size_t len);
	char			*(*find)(struct s_string *this, \
							char c, size_t offset);
	size_t			(*find_i)(struct s_string *this, \
							char c, size_t offset);
	void			(*destroy)(struct s_string *this);
};

struct				s_c_string
{
	struct s_string	(*new)(const char *initial);
	void			(*print)(struct s_string *this);
};

void				ft_string_method_append_p(struct s_string *this, \
										char *new, size_t pos);
void				ft_string_method_append(struct s_string *this, \
										struct s_string *new, size_t pos);
void				mt_string_append_pp(struct s_string *this, char *new, \
										size_t length, size_t pos);
void				ft_string_method_append_chars(struct s_string *this, \
										char c, size_t count, size_t pos);
char				*ft_string_method_find(struct s_string *this, \
										char c, size_t offset);
void				ft_string_method_destroy(struct s_string *this);
size_t				ft_string_method_find_i(struct s_string *this, \
										char c, size_t offset);
void				ft_string_method_delete(struct s_string *this, \
										size_t pos, size_t len);

extern const struct s_c_string c_string;

#endif
