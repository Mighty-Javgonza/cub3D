/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_all_fblocks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 10:11:44 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/18 12:20:31 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Accepts a string marked (e.g  Hola %   % tutut %)
** and a list of blocks, and puts them on the %
*/

static void	overwrite_marker(struct s_string *str, size_t marker_pos,
								struct s_string *new)
{
	str->delete(str, marker_pos, 1);
	str->append(str, new, marker_pos);
}

void		ft_write_all_fblocks(t_list *fblocks, struct s_string *str)
{
	t_print_block	*current_block;
	size_t			offset;

	offset = 0;
	while (fblocks->next != 0)
	{
		fblocks = fblocks->next;
		current_block = fblocks->content;
		ft_cformat_block_writer(current_block);
		offset = str->find_i(str, FORMAT_INDICATOR, offset);
		overwrite_marker(str, offset, &current_block->str);
	}
}
