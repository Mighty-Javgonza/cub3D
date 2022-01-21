/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_method_append_p.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:47:38 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:53:12 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends a pure '\0' terminated string
*/

void	ft_string_method_append_p(struct s_string *this, char *new, size_t pos)
{
	char	*new_char;
	size_t	new_length;

	if (pos == -1ul)
		pos = this->length;
	new_length = this->length + ft_strlen(new);
	new_char = malloc(new_length);
	ft_memset(new_char, 0, new_length);
	ft_memmove(new_char, this->s, pos);
	ft_memmove(new_char + pos, new, ft_strlen(new));
	ft_memmove(new_char + pos + ft_strlen(new), \
				this->s + pos, this->length - pos);
	free(this->s);
	this->s = new_char;
	this->length = new_length;
}
