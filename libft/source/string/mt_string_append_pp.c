/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mt_string_append_pp.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:10:04 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/28 12:32:58 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends a  puere string but only up to a given length 
** (doesn't need to be '\0' terminated)
*/

void	mt_string_append_pp(struct s_string *this, char *new, \
								size_t length, size_t pos)
{
	size_t	new_length;
	char	*new_char;

	if (pos == -1ul)
		pos = this->length;
	new_length = this->length + length;
	new_char = malloc(new_length * sizeof(*new_char));
	ft_memset(new_char, 0, new_length);
	ft_memmove(new_char, this->s, pos);
	ft_memmove(new_char + pos, new, length);
	ft_memmove(new_char + pos + length, this->s + pos, this->length - pos);
	free(this->s);
	this->s = new_char;
	this->length = new_length;
}
