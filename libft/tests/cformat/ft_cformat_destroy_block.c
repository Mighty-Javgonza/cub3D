/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_destroy_block.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:12:20 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:21:07 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	t_print_block	*block;

	printf("---------NO SEGFAULT CHECK----------\n");
	block = malloc(sizeof(*block));
	*block = ft_cformat_read_block("3.2d");
	block->str = c_string.new("This is not supposed to be happening");
	ft_cformat_block_destroy(block);
	printf("------DIDN'T SEGFAULT TEST OK-------\n");
}
