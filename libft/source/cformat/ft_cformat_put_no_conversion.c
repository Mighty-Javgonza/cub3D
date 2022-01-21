/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_put_no_conversion.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 12:38:05 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:45:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_cformat_put_no_conversion(t_print_block *block)
{
	if (block->conv == 8)
		block->str.append_p(&block->str, "%", -1);
}
