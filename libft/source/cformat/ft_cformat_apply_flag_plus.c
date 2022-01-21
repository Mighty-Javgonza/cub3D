/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_apply_flag_plus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:42:19 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/08 14:32:15 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the + flag if is a number
*/

void	ft_cformat_apply_flag_plus(t_print_block *block)
{
	if (ft_cformat_is_num_conv(block->conv))
		if (block->str.s[0] != '-')
			block->str.append_chars(&block->str, '+', 1, 0);
}
