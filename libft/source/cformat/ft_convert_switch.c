/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_switch.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:18:49 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:14:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

static t_converter	get_converter(int conv)
{
	t_converter all_converters[8];

	all_converters[0] = ft_conv_c;
	all_converters[1] = ft_conv_s;
	all_converters[2] = ft_conv_p;
	all_converters[3] = ft_conv_i;
	all_converters[4] = ft_conv_i;
	all_converters[5] = ft_conv_u;
	all_converters[6] = ft_conv_xl;
	all_converters[7] = ft_conv_xu;
	return (all_converters[conv]);
}

/*
** Converts to char * from a char of CONV_SET (cformat)
** Length determines if an int is long long or short...
*/

char				*ft_convert_switch(t_all_types data, \
										int conv, int length)
{
	t_converter		convert;

	convert = get_converter(conv);
	return (convert(data, length));
}
