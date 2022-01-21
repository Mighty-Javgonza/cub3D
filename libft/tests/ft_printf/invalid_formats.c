/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid_formats.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 12:50:59 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/18 11:12:44 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("-----------NO SEGFAULT TEST-----------\n");
	ft_printf("%k");
	ft_printf("%");
	ft_printf("%**d", 3);
	ft_printf("%*", 3);
	ft_printf("%$$lld", 3);
	ft_printf("%$lld", 3);
	ft_printf("%s %6.-3%", "Hola");
	ft_printf("%s %6.-3%", "Hola");
	ft_printf("%t$d", 3);
	ft_printf("%t$d", 3);
	ft_printf("%.3Holad", 3);
	ft_printf("%3..4d", 3);
	ft_printf("    %l", 3);
	test_leaks("invalid_formats.lib_test");
	printf("-------DIDN'T SEGFAULT TEST OK--------\n");
}
