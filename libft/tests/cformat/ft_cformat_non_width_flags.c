/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cformat_non_width_flags.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:10:14 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:21:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	print_res(char *test, char *res, char *expected)
{
	if (ft_strncmp(res, expected, ft_strlen(expected) + 1) != 0)
		printf("TEST FAILED: %s\n ->Actual result: |%s|\n", test, res);
	else
		printf("TEST OK: %s\n", test);
}

int			main(void)
{
	t_print_block	block;

	block.conv = 3;
	block.str = c_string.new("123");
	ft_cformat_apply_flag_space(&block);
	print_res("flags SPACE d", block.str.s, " 123");
	block.str = c_string.new("-123");
	ft_cformat_apply_flag_space(&block);
	print_res("flags SPACE neg d", block.str.s, "-123");
	block.str = c_string.new("-42");
	ft_cformat_apply_flag_plus(&block);
	print_res("flags PLUS neg d", block.str.s, "-42");
	block.str = c_string.new("42");
	ft_cformat_apply_flag_plus(&block);
	print_res("flags PLUS d", block.str.s, "+42");
}
