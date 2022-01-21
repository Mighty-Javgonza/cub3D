/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_method_append.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:49:35 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:53:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends one string to another at the given position (pushing chars forward)
*/

void	ft_string_method_append(struct s_string *this, struct s_string *new, \
								size_t pos)
{
	char	*new_char;
	size_t	new_length;

	if (pos == -1ul)
		pos = this->length;
	new_length = this->length + new->length;
	new_char = malloc(new_length);
	ft_memset(new_char, 0, new_length);
	ft_memmove(new_char, this->s, pos);
	ft_memmove(new_char + pos, new->s, new->length);
	ft_memmove(new_char + pos + new->length, this->s + pos, this->length - pos);
	free(this->s);
	this->s = new_char;
	this->length = new_length;
}
