/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recalculate_all_block_vargs.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:55:50 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/16 11:04:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_recalculate_all_block_vargs(t_list *blocks, int auto_index)
{
	while (blocks->next != 0)
	{
		blocks = blocks->next;
		ft_recalculate_block_vargs(blocks->content, &auto_index);
	}
}
