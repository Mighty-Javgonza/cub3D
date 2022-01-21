/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 14:39:59 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/27 12:41:09 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

int main()
{
	struct s_bigint	n1;
	struct s_string	s;

	n1 = c_bigint.new(3);
	n1.set_base_value(&n1, 33);
	s = c_bigint.hex_to_string(&n1);
	if (ft_strncmp(s.s, "0 0 21", 7) != 0)
		return (-1);
	return (0);
}
