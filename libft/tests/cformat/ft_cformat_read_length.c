/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_read_length.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 10:23:09 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:19:50 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static void	print_res(char *test, int res, int expected)
{
	if (res != expected)
		printf("TEST FAILED: %s\n ->Actual result: %d\n", test, res);
	else
		printf("TEST OK: %s\n", test);
}

int			main(void)
{
	char	*bformat;
	int		res;

	bformat = "llu";
	res = ft_cformat_read_length(bformat);
	print_res("length llu", res, 2);
	bformat = "lu";
	res = ft_cformat_read_length(bformat);
	print_res("length lu", res, 1);
	bformat = "hu";
	res = ft_cformat_read_length(bformat);
	print_res("length hu", res, -1);
	bformat = "d";
	res = ft_cformat_read_length(bformat);
	print_res("length d", res, 0);
	bformat = "llllhhhhhhhhhhhhhd";
	res = ft_cformat_read_length(bformat);
	print_res("length crazy", res, -2);
}
