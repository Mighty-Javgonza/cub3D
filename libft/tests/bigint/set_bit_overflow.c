/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:39:59 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/28 15:48:47 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

int main()
{
	struct s_bigint	n1;

	n1 = c_bigint.new(10);
	n1.set_base_value(&n1, 1ull);
	n1.set_bit(&n1, 64 * 5, 1);
	if (n1.data[5] != 1)
		return (-1);
	return (0);
}
