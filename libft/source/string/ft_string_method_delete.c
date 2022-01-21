/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_method_delete.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:57:54 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/28 12:57:33 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Deletes a number of len chars at the given pos
** -1 in pos indicates delete from end
*/

void	ft_string_method_delete(struct s_string *this, size_t pos, size_t len)
{
	char	*new_char;

	if (pos == -1ul)
		pos = this->length - len;
	len = len >= this->length - pos ? this->length - pos: len;
	new_char = malloc(this->length - len);
	ft_memset(new_char, 0, this->length - len);
	ft_memmove(new_char, this->s, pos);
	ft_memmove(new_char + pos, this->s + pos + len, this->length - len - pos);
	free(this->s);
	this->s = new_char;
	this->length = this->length - len;
}
