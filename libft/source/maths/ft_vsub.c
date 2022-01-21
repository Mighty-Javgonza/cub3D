/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsub.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:07:00 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:13:35 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Subtracts two vectors by components
*/

t_vector	ft_vsub(t_vector v1, t_vector v2)
{
	t_vector	rvalue;

	rvalue.x = v1.x - v2.x;
	rvalue.y = v1.y - v2.y;
	rvalue.z = v1.z - v2.z;
	return (rvalue);
}
