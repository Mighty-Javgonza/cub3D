/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vlength.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:16:17 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/24 14:16:20 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calculates the length of a vector assuming it's tail is at 0,0,0
*/

double	ft_vlength(t_vector v)
{
	double	rvalue;

	rvalue = ft_dist(v, ft_vector(0, 0, 0));
	return (rvalue);
}
