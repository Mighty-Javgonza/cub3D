/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_apply_flag_space.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:53:54 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/08 14:36:29 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_cformat_apply_flag_space(t_print_block *block)
{
	int	should_add_space;

	should_add_space = ft_cformat_is_num_conv(block->conv);
	should_add_space &= (block->str.s[0] != '-');
	if (should_add_space)
		block->str.append_chars(&block->str, ' ', 1, 0);
}
