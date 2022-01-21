/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_method_destroy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:55:56 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:56:00 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Destroys the string for the forseeable future
*/

void	ft_string_method_destroy(struct s_string *this)
{
	if (this->s != 0)
		free(this->s);
}
