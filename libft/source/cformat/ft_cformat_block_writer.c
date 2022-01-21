/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_block_writer.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:56:30 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/18 12:47:20 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

static void	apply_flags(t_print_block *block)
{
	int flags;

	flags = block->flags;
	if (flags & FLAG_SPACE)
		ft_cformat_apply_flag_space(block);
	if (flags & FLAG_PLUS)
		ft_cformat_apply_flag_plus(block);
}

static void	add_width(t_print_block *block)
{
	int	width;
	int width_by_arg;

	width_by_arg = ft_cformat_check_arg_width(block->vargs_code);
	if (width_by_arg)
		width = (block->args[block->arg])->i;
	else
		width = block->width;
	ft_width_switch(width, &block->str, block->flags, \
					ft_cformat_is_num_conv(block->conv));
}

static void	cut_to_prec(t_print_block *block)
{
	int prec;
	int	width_by_arg;
	int	prec_by_arg;

	prec_by_arg = ft_cformat_check_arg_prec(block->vargs_code);
	width_by_arg = ft_cformat_check_arg_width(block->vargs_code);
	if (prec_by_arg)
		prec = block->args[block->arg + width_by_arg]->i;
	else
		prec = block->prec;
	ft_prec_switch(prec, &block->str, block->conv);
}

static void	put_conversion(t_print_block *block)
{
	char	*converted_str;
	int		data_index;

	data_index = block->arg;
	data_index += ft_cformat_check_arg_width(block->vargs_code);
	data_index += ft_cformat_check_arg_prec(block->vargs_code);
	converted_str = ft_convert_switch(*(block->args[data_index]), \
										block->conv, block->length);
	block->str.append_p(&block->str, converted_str, -1);
	free(converted_str);
}

/*
** Returns a string instance by writing the block
*/

void		ft_cformat_block_writer(t_print_block *block)
{
	block->str = c_string.new("");
	if ((block->vargs_code & ARGS_CONVERTER) != 0)
		put_conversion(block);
	else
		ft_cformat_put_no_conversion(block);
	cut_to_prec(block);
	apply_flags(block);
	add_width(block);
}
