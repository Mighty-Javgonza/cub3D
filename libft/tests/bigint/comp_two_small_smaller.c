/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zz_temp_test_comp.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 09:58:01 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/28 10:14:04 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	struct s_bigint	n1;
	struct s_bigint	n2;

	n1 = c_bigint.new(3);
	n2 = c_bigint.new(3);
	n1.set_base_value(&n1, 11);
	n2.set_base_value(&n2, 10);
	if (!(c_bigint.compare(&n1, &n2) > 0))
		return (-1);
	return (0);
}
