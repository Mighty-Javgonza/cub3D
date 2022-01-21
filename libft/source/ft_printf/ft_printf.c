/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:19:58 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/18 13:00:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_inner.h"
#include <stdarg.h>
#include <stdio.h>

static void	put_args_reference_in_blocks(t_list *fblocks, t_all_types **ref)
{
	while (fblocks->next != 0)
	{
		fblocks = fblocks->next;
		((t_print_block *)fblocks->content)->args = ref;
	}
}

static void	free_args(t_all_types **args)
{
	t_all_types	**arg;

	arg = args;
	arg++;
	while (*arg != 0)
	{
		free(*arg);
		arg++;
	}
	free(args);
}

static void	*read_requested_args(va_list vlist, t_list *fblocks)
{
	t_all_types	**args;

	args = ft_cformat_read_vargs(vlist, fblocks);
	put_args_reference_in_blocks(fblocks, args);
	return (args);
}

int			ft_printf(const char *format, ...)
{
	va_list			vlist;
	struct s_string	str;
	t_list			*fblocks;
	int				rvalue;
	t_all_types		**args;

	va_start(vlist, format);
	str = c_string.new(format);
	if (ft_cformat_read(&str, &(fblocks)) != 0)
	{
		args = read_requested_args(vlist, fblocks);
		ft_write_all_fblocks(fblocks, &str);
		write(1, str.s, str.length);
		free_args(args);
	}
	rvalue = (int)str.length;
	ft_cformat_destroy_blocklist(fblocks);
	str.destroy(&str);
	return (rvalue);
}

int			ft_sprintf(char **dest, const char *format, ...)
{
	va_list			vlist;
	struct s_string	str;
	t_list			*fblocks;
	int				rvalue;
	t_all_types		**args;

	va_start(vlist, format);
	str = c_string.new(format);
	if (ft_cformat_read(&str, &(fblocks)) != 0)
	{
		args = read_requested_args(vlist, fblocks);
		ft_write_all_fblocks(fblocks, &str);
		*dest = ft_substr(str.s, 0, str.length);
		free_args(args);
	}
	rvalue = (int)str.length;
	ft_cformat_destroy_blocklist(fblocks);
	str.destroy(&str);
	return (rvalue);
}
