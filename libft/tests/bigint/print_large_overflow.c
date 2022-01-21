/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:39:59 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/28 13:11:47 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

int main()
{
	struct s_bigint	n1;
	struct s_string str;

	n1 = c_bigint.new(3);
	n1.set_base_value(&n1, 1ull);
	n1.shift_left(&n1, 65);
	str = c_bigint.dec_to_string(&n1);
	if (ft_strncmp(str.s, "36893488147419103232", 22) != 0)
		return (-1);
	return (0);
}
