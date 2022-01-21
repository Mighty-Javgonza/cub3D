/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_neg_v.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:19:33 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:19:35 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns a vector with all components changed of sign
*/

t_vector	ft_neg_v(t_vector v)
{
	t_vector	rvalue;

	rvalue.x = -v.x;
	rvalue.y = -v.y;
	rvalue.z = -v.z;
	return (rvalue);
}
