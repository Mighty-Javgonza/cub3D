/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf_general.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 11:25:03 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/18 13:01:26 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	print_res(char *test, char *res, char *expected)
{
	if (ft_strncmp(res, expected, ft_strlen(expected) + 1) != 0)
		printf("TEST FAILED: %s\n ->Actual result: |%s|\n", test, res);
	else
		printf("TEST OK: %s\n", test);
}

static void	test1(void)
{
	char	*dest;

	ft_sprintf(&dest, "%i\n", 42);
	print_res("sprintf i", dest, "42\n");
	free(dest);
	ft_sprintf(&dest, "%u\n", -1);
	print_res("sprintf u", dest, "4294967295\n");
	free(dest);
	ft_sprintf(&dest, "%x\n", -1);
	print_res("sprintf xl", dest, "ffffffff\n");
	free(dest);
	ft_sprintf(&dest, "%X\n", -1);
	print_res("sprintf xu", dest, "FFFFFFFF\n");
	free(dest);
	ft_sprintf(&dest, "%%\n");
	print_res("sprintf %", dest, "%\n");
	free(dest);
	ft_sprintf(&dest, "%c %s %p %d %i %u %x %X %%\n", \
			'a', "Hola", 255, -35, 42, 4294967296u, 255, 255);
	print_res("sprintf all", dest, "a Hola 0xff -35 42 0 ff FF %\n");
	free(dest);
}

int			main(void)
{
	char	*dest;

	ft_sprintf(&dest, "HOLA\n");
	print_res("sprintf non", dest, "HOLA\n");
	free(dest);
	ft_sprintf(&dest, "%c\n", 'a');
	print_res("sprintf c", dest, "a\n");
	free(dest);
	ft_sprintf(&dest, "%s\n", "Lalala");
	print_res("sprintf s", dest, "Lalala\n");
	free(dest);
	ft_sprintf(&dest, "%p\n", 0);
	print_res("sprintf p", dest, "0x0\n");
	free(dest);
	ft_sprintf(&dest, "%d\n", -35);
	print_res("sprintf d", dest, "-35\n");
	free(dest);
	test1();
	test_leaks("ft_sprintf_general.lib_test");
}
