/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_block_destroy.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:22:17 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 11:18:44 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** It uses void so it can be used in the ft_lstcdel function
*/

void	ft_cformat_block_destroy(void *block)
{
	t_print_block	*bloc;

	if (block == 0)
		return ;
	bloc = (t_print_block *)block;
	if (bloc->str.s != 0)
		bloc->str.destroy(&bloc->str);
	free(bloc);
}
