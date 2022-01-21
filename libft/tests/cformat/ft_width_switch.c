/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prec_switch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:57:04 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:50:51 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	print_res(char *test, char *res, char *expected)
{
	if (ft_strncmp(res, expected, ft_strlen(expected)) != 0)
		printf("TEST FAILED: %s\n ->Actual result: |%s|\n", test, res);
	else
		printf("TEST OK: %s\n", test);
}

static void	test1(int flags, struct s_string test_str)
{
	flags = FLAG_ZPAD;
	test_str = c_string.new("132");
	ft_width_switch(6, &test_str, flags, 1);
	print_res("width 0 flag d", test_str.s, "000132");
	test_str = c_string.new("-132");
	ft_width_switch(6, &test_str, flags, 1);
	print_res("width 0 flag d neg", test_str.s, "-00132");
	flags = FLAG_LA;
	test_str = c_string.new("132");
	ft_width_switch(6, &test_str, flags, 1);
	print_res("width LA flag d", test_str.s, "132   ");
	flags = FLAG_SPACE;
	test_str = c_string.new(" 132");
	ft_width_switch(6, &test_str, flags, 1);
	print_res("width SPACE flag d", test_str.s, "   132");
	flags = FLAG_SPACE | FLAG_LA;
	test_str = c_string.new(" 132");
	ft_width_switch(6, &test_str, flags, 1);
	print_res("width SPACE + LA d", test_str.s, " 132  ");
	flags = FLAG_PLUS;
	test_str = c_string.new("+132");
	ft_width_switch(6, &test_str, flags, 1);
	print_res("width PLUS d", test_str.s, "  +132");
}

int			main(void)
{
	struct s_string	test_str;
	int				flags;

	flags = 0;
	test_str = c_string.new("Hola");
	ft_width_switch(6, &test_str, flags, 0);
	print_res("width normal s", test_str.s, "  Hola");
	test_str = c_string.new("132");
	ft_width_switch(1, &test_str, flags, 1);
	print_res("width too short d", test_str.s, "132");
	test_str = c_string.new("-132");
	ft_width_switch(6, &test_str, flags, 1);
	print_res("width nomal d", test_str.s, "  -132");
	test1(flags, test_str);
}
