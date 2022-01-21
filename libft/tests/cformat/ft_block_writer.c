/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_writer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 08:58:25 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:43:10 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	print_res(char *test, char *res, char *expected)
{
	if (ft_strncmp(res, expected, ft_strlen(expected) + 1) != 0)
		printf("TEST FAILED: %s\n ->Actual result: |%s|\n", test, res);
	else
		printf("TEST OK: %s\n", test);
}

static void	test1(t_print_block test_block)
{
	ft_cformat_block_writer(&test_block);
	print_res("All by args s", test_block.str.s, "       HOL");
	test_block.vargs_code = 5;
	test_block.width = -1;
	test_block.conv = 4;
	ft_cformat_block_writer(&test_block);
	print_res("No width by arg", test_block.str.s, "0000000003");
	test_block.vargs_code = 1;
	test_block.prec = -1;
	ft_cformat_block_writer(&test_block);
	print_res("Only conv", test_block.str.s, "10");
	test_block.vargs_code = 3;
	test_block.prec = 3;
	ft_cformat_block_writer(&test_block);
	print_res("No prec by args", test_block.str.s, "       003");
}

int			main(void)
{
	t_print_block	test_block;
	void			*test_point[3];
	t_all_types		test_args[3];

	test_args[0].i = 10;
	test_args[1].i = 3;
	test_args[2].p = "HOLa";
	test_point[0] = &(test_args[0]);
	test_point[1] = &(test_args[1]);
	test_point[2] = &(test_args[2]);
	test_block = (t_print_block)
	{
		.vargs_code = 1 + 2 + 4,
		.arg = 0,
		.width = -2,
		.prec = -2,
		.length = 0,
		.conv = 1,
		.args = (t_all_types **)test_point,
	};
	test1(test_block);
}
