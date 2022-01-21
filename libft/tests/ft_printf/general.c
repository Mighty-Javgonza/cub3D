/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:09:26 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/18 12:41:37 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			main(void)
{
	ft_printf("HOLA\n");
	ft_printf("%c\n", 'a');
	ft_printf("%s\n", "Lalala");
	ft_printf("%p\n", "Hola");
	ft_printf("%d\n", -35);
	ft_printf("%i\n", 42);
	ft_printf("%u\n", -1);
	ft_printf("%x\n", -1);
	ft_printf("%X\n", -1);
	ft_printf("%%\n");
	ft_printf("%c %s %p %d %i %u %x %X %%\n", \
			'a', "Hola", 255, -35, 42, 4294967296u, 255, 255);
	test_leaks("general.lib_test");
}
