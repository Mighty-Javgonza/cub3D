/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:16:02 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/18 12:34:18 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_cformat.h"

static char				*cut_block_part(char *block_start, size_t search_size)
{
	char	*block_end;

	block_end = ft_strncharset(block_start + 1, CONV_SET, search_size);
	if (block_end == 0)
		return (0);
	block_end++;
	return (ft_substr(block_start, 1, block_end - (block_start)));
}

static t_print_block	*get_read_block(char *block_part)
{
	t_print_block	*block;

	block = malloc(sizeof(t_print_block));
	*block = ft_cformat_read_block(block_part);
	return (block);
}

static t_print_block	*find_and_read_next_block(\
					struct s_string *format, size_t *start_index)
{
	size_t			block_start;
	char			*block_part;
	t_print_block	*rvalue;

	block_start = format->find_i(format, FORMAT_INDICATOR, *start_index);
	block_part = cut_block_part(format->s + block_start,
									format->length - block_start);
	if (block_part == 0)
		return (0);
	rvalue = get_read_block(block_part);
	format->delete(format, block_start + 1, ft_strlen(block_part) - 1);
	*start_index = block_start + 1;
	free(block_part);
	return (rvalue);
}

/*
** Puts a list of t_print_blocks by reding the format
*/

int						ft_cformat_read(struct s_string *format,\
											t_list **dest_list)
{
	t_print_block	*block;
	size_t			read_chars;

	*dest_list = ft_lstnew(0);
	read_chars = 0;
	while (format->find(format, FORMAT_INDICATOR, read_chars) != 0)
	{
		block = find_and_read_next_block(format, &read_chars);
		if (block == 0 || block->state == -1)
		{
			if (block != 0)
				free(block);
			ft_putstr_fd("PRINTF: ERROR Invalid format\n", 1);
			return (0);
		}
		ft_lstput_back(dest_list, block);
	}
	return (1);
}
