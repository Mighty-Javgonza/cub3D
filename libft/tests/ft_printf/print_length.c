/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_length.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 10:49:20 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:31:01 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("----------MANUAL CHECK REQUIRED---------------\n");
	printf("Testing u\n");
	ft_printf("%1$u %1$lu %2$hu\n", 4294967296u, 4294967295);
	printf("Testing d\n");
	ft_printf("%1$d %1$ld %2$hd\n", 2147483648l, 2147483647);
	printf("Testing p\n");
	ft_printf("%1$p %1$lp %2$hp\n", 4294967296u, 4294967295);
	printf("Testing xl\n");
	ft_printf("%1$x %1$lx %2$hx\n", 4294967296lu, 4294967295);
	printf("Testing xu\n");
	ft_printf("%1$X %1$lX %2$hX\n", 4294967296lu, 4294967295);
	printf("Testing s\n");
	ft_printf("%1$s %1$ls %1$hs\n", "Hola");
	printf("-----------PRESS KEY TO CONTINUE-------------\n");
	getchar();
}
