/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read_block_vargs.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 11:24:54 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:09:28 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	width(t_all_types *data, t_print_block *block, va_list vlist)
{
	data->i = va_arg(vlist, int);
	block->width = data->i;
}

static void	prec(t_all_types *data, t_print_block *block, va_list vlist)
{
	data->i = va_arg(vlist, int);
	block->prec = data->i;
}

static void	conv(t_all_types *data, t_print_block *block, va_list vlist)
{
	*data = ft_varg_read_switch(block->conv, vlist);
	block->conv_data = *data;
}

static void	take_action(void (*action)(), t_list *types_list, \
							t_print_block *block, va_list vlist)
{
	t_all_types	*data;

	data = malloc(sizeof(t_all_types));
	action(data, block, vlist);
	ft_lstput_back(&types_list, data);
}

/*
** Puts the vargs of the block at the end of the list
*/

void		ft_cformat_put_block_vargs_list(t_list *types_list, \
							t_print_block *block, va_list vargs)
{
	if ((block->vargs_code & ARGS_WIDTH) != 0)
		take_action(width, types_list, block, vargs);
	if ((block->vargs_code & ARGS_PREC) != 0)
		take_action(prec, types_list, block, vargs);
	if ((block->vargs_code & ARGS_CONVERTER) != 0)
		take_action(conv, types_list, block, vargs);
}
