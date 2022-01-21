/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_method_find.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:51:18 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/04 12:27:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_string_method_find(struct s_string *this, char c, \
										size_t offset)
{
	size_t	travelled;

	travelled = offset > this->length ? this->length : offset;
	while (travelled < this->length)
	{
		if (this->s[travelled] == c)
			return (this->s + travelled);
		travelled++;
	}
	return (0);
}
