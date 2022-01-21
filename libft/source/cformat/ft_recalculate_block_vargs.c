/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recalculate_block_vargs.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:53:22 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 10:53:45 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_recalculate_block_vargs(t_print_block *block, int *auto_index)
{
	if (*auto_index == -1)
	{
		block->arg -= ft_cformat_check_arg_width(block->vargs_code);
		block->arg -= ft_cformat_check_arg_prec(block->vargs_code);
	}
	else
	{
		block->arg = *auto_index;
		(*auto_index)++;
		*auto_index += ft_cformat_check_arg_width(block->vargs_code);
		*auto_index += ft_cformat_check_arg_prec(block->vargs_code);
	}
}
