/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:39:59 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/27 15:41:05 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

int main()
{
	struct s_bigint	n1;
	struct s_bigint	n2;

	n1 = c_bigint.new(3);
	n1.set_base_value(&n1, 1);
	n1.shift_left(&n1, 64);
	n2 = c_bigint.new(3);
	n2.set_base_value(&n2, 1);
	n1.sub(&n1, &n2);
	if (n1.data[2] != -1ull)
		return (-1);
	return (0);
}
