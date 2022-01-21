/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read_block.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:31:03 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/18 10:12:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

t_print_block	ft_cformat_read_block(char *str)
{
	t_print_block	rvalue;

	rvalue.state = -1;
	if (ft_cformat_check_format(str) == 0)
		return (rvalue);
	rvalue = (t_print_block) {
		.arg = ft_cformat_read_arg(str),
		.flags = ft_cformat_read_flags(str),
		.width = ft_cformat_read_width(str),
		.prec = ft_cformat_read_prec(str),
		.length = ft_cformat_read_length(str),
		.conv = ft_cformat_read_conv(str),
		.state = 1,
	};
	rvalue.vargs_code = ft_cformat_vargs_code(rvalue);
	return (rvalue);
}
