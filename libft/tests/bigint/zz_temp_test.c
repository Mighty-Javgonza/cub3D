/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:39:59 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/28 15:47:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

int main()
{
	struct s_bigint	n1;
	struct s_string str;

	n1 = c_bigint.new(100);
	n1.set_base_value(&n1, 1ull);
	n1.shift_left(&n1, 50);
 printf("\nShifted!\n");
	str = c_bigint.dec_to_string(&n1);
	c_string.print(&str);
	return (0);
}
