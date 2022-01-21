/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_checks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 14:13:49 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/07 14:16:15 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

/*
** Is the width asking to be read by parameters?
*/

int	ft_cformat_check_arg_width(int varg_code)
{
	if ((varg_code & ARGS_WIDTH) != 0)
		return (1);
	return (0);
}

/*
** Is the prec asking to be read by parameters?
*/

int	ft_cformat_check_arg_prec(int varg_code)
{
	if ((varg_code & ARGS_PREC) != 0)
		return (1);
	return (0);
}
