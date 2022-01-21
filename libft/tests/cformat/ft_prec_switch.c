/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prec_switch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:57:04 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:21:34 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	print_res(char *test, char *res, char *expected)
{
	if (ft_strncmp(res, expected, ft_strlen(expected)) != 0)
		printf("TEST FAILED: %s\n ->Actual result: %s\n", test, res);
	else
		printf("TEST OK: %s\n", test);
}

int			main(void)
{
	struct s_string	test_str;

	test_str = c_string.new("Hola, buenas");
	ft_prec_switch(3, &test_str, 1);
	print_res("cut s", test_str.s, "Hol");
	test_str = c_string.new("123");
	ft_prec_switch(6, &test_str, 3);
	print_res("add d", test_str.s, "000123");
	test_str = c_string.new("FFC35");
	ft_prec_switch(1, &test_str, 7);
	print_res("add nothing X", test_str.s, "FFC35");
	test_str = c_string.new("a");
	ft_prec_switch(0, &test_str, 7);
	print_res("do nothing c", test_str.s, "a");
}
