/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read_vargs.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:58:41 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:08:55 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"
#include <stdarg.h>

static void	read_in_order(t_list *blocks, t_list *types_list, va_list vlist)
{
	t_list			*list_ptr;
	t_print_block	*block;

	list_ptr = blocks;
	while (list_ptr->next != 0)
	{
		list_ptr = list_ptr->next;
		block = list_ptr->content;
		ft_cformat_put_block_vargs_list(types_list, block, vlist);
	}
	ft_recalculate_all_block_vargs(blocks, 1);
}

static int	find_next_arg(int current_arg, t_list *blocks)
{
	t_print_block	*block;
	int				width_by_args;
	int				prec_by_args;
	int				rvalue;

	rvalue = 0;
	while (blocks->next != 0)
	{
		blocks = blocks->next;
		block = blocks->content;
		if (block->arg > current_arg)
		{
			width_by_args = ft_cformat_check_arg_width(block->vargs_code);
			prec_by_args = ft_cformat_check_arg_prec(block->vargs_code);
			if (block->arg - width_by_args - prec_by_args == current_arg + 1)
				return (current_arg + width_by_args + prec_by_args + 1);
		}
	}
	return (-1);
}

static void	read_no_order(t_list *blocks, t_list *types_list, va_list vlist)
{
	t_print_block	*current_block;
	int				current_arg;

	current_arg = 0;
	while ((current_arg = find_next_arg(current_arg, blocks)) != -1)
	{
		current_block = ft_lstget(blocks, current_arg)->content;
		ft_cformat_put_block_vargs_list(types_list, current_block, vlist);
	}
	ft_recalculate_all_block_vargs(blocks, -1);
}

static void	free_only_pointers_of_list(t_list *list)
{
	t_list	*previous_item;

	while (list->next != 0)
	{
		previous_item = list;
		list = list->next;
		free(previous_item);
	}
	free(list);
}

/*
** Accepts a list of vargs and returns them properly casted according
** to the format specifications
** IMPORTANT: Do not free types_list as its pointer are what
** is put in the return array
*/

t_all_types	**ft_cformat_read_vargs(va_list vargs, t_list *blocks)
{
	t_list			*types_list;
	t_all_types		**rvalue;

	types_list = ft_lstnew(0);
	if (blocks->next != 0)
	{
		if (((t_print_block *)(blocks->next->content))->arg == -1)
			read_in_order(blocks, types_list, vargs);
		else
			read_no_order(blocks, types_list, vargs);
	}
	rvalue = ft_lsttoarr(types_list);
	free_only_pointers_of_list(types_list);
	return (rvalue);
}
