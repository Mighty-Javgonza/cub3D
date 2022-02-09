/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_colors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:45:06 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:19:50 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds the value of 2 colors
*/

#include "../maths/libft_math.h"

t_color	ft_add_colors(t_color c1, t_color c2)
{
	unsigned char	comp1;
	unsigned char	comp2;
	t_color			rvalue;

	comp1 = c1 >> 16;
	comp2 = c2 >> 16;
	rvalue = ft_const_u((t_color)comp1 + comp2, 0, 255) << 16;
	comp1 = c1 >> 8;
	comp2 = c2 >> 8;
	rvalue += ft_const_u((t_color)comp1 + comp2, 0, 255) << 8;
	comp1 = c1;
	comp2 = c2;
	rvalue += ft_const_u((t_color)comp1 + comp2, 0, 255);
	return (rvalue);
}
