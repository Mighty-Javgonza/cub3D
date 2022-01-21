/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_destroy_blocklist.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:30:34 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:10:16 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_cformat_destroy_blocklist(t_list *blocks)
{
	ft_lstcdel(ft_cformat_block_destroy, blocks);
}
