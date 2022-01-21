/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_vargs_code.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:36:34 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/04 12:28:56 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

/*
** Accepts a block and returs which vars shoud be read
*/

int	ft_cformat_vargs_code(t_print_block block)
{
	int	rvalue;

	rvalue = 0;
	if (block.width == -2)
		rvalue |= ARGS_WIDTH;
	if (block.prec == -2)
		rvalue |= ARGS_PREC;
	if (!ft_ischarset(CONV_SET[block.conv], NO_ARG_CONVS))
		rvalue |= ARGS_CONVERTER;
	return (rvalue);
}
