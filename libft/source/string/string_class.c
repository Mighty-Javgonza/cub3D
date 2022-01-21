/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_class_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:35:34 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 10:24:11 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_class.h"
#include <stdlib.h>

static struct s_string	new(const char *initial)
{
	struct s_string	rvalue;

	rvalue = (struct s_string) {
		.append = ft_string_method_append,
		.append_p = ft_string_method_append_p,
		.append_pp = mt_string_append_pp,
		.append_chars = ft_string_method_append_chars,
		.delete = ft_string_method_delete,
		.find = ft_string_method_find,
		.find_i = ft_string_method_find_i,
		.destroy = ft_string_method_destroy,
	};
	if (initial != 0)
		rvalue.s = ft_strdup(initial);
	else
		rvalue.s = ft_strdup("");
	rvalue.length = ft_strlen(initial);
	return (rvalue);
}

static void	print(struct s_string *this)
{
	write(1, this->s, this->length);
}

const struct s_c_string c_string = {.new = &new,
									.print = &print};
