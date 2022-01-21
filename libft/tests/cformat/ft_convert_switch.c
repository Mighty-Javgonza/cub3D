/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_switch.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:19:49 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:16:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	print_res(char *test, char *res, char *expected)
{
	if (ft_strncmp(res, expected, ft_strlen(expected) + 1) != 0)
		printf("TEST FAILED: %s\n ->Actual result: %s\n", test, res);
	else
		printf("TEST OK: %s\n", test);
}

static void	test1(void)
{
	t_all_types	data;
	char		*str;
	char		*res;

	res = malloc(10);
	data.c = 'w';
	str = ft_convert_switch(data, 0, 0);
	sprintf(res, "%s", str);
	print_res("convert c", str, "w");
	data.i = -17;
	str = ft_convert_switch(data, 3, 0);
	str = ft_convert_switch(data, 4, 0);
	sprintf(res, "%s", str);
	print_res("convert i", str, "-17");
	data.i = 255;
	str = ft_convert_switch(data, 6, 0);
	sprintf(res, "%s", str);
	print_res("convert xl", str, "ff");
	str = ft_convert_switch(data, 7, 0);
	sprintf(res, "%s", str);
	print_res("convert xu", str, "FF");
	free(res);
}

int			main(void)
{
	t_all_types	data;
	char		*str;
	char		*res;

	test1();
	res = malloc(10);
	data.p = (void *)14;
	str = ft_convert_switch(data, 2, 0);
	sprintf(res, "%s", str);
	print_res("convert p", str, "0xe");
	data.s = "Hola";
	str = ft_convert_switch(data, 1, 0);
	sprintf(res, "%s", str);
	print_res("convert s", str, "Hola");
	data.s = (char *)0;
	str = ft_convert_switch(data, 1, 0);
	sprintf(res, "%s", str);
	print_res("convert s (null)", str, "(null)");
	free(res);
}
