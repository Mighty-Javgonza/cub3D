/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_method_append_chars.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:50:15 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/28 12:34:31 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Will append a number of the given char at th given pos
** (pushing the rest formward)
*/

void	ft_string_method_append_chars(struct s_string *this, char c, \
										size_t count, size_t pos)
{
	char	*new_str;

	new_str = malloc(sizeof(char) * count);
	ft_memset(new_str, c, count);
	this->append_pp(this, new_str, count, pos);
	free(new_str);
}
