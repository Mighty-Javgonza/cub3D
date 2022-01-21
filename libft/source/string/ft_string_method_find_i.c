/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_method_find_i.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:57:10 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:57:47 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the index instead of the char *
*/

size_t	ft_string_method_find_i(struct s_string *this, char c, size_t offset)
{
	size_t	travelled;

	travelled = offset > this->length ? this->length : offset;
	while (travelled < this->length)
	{
		if (this->s[travelled] == c)
			return (travelled);
		travelled++;
	}
	return (0);
}
