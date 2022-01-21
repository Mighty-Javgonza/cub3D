/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmt_bigint_compare.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 10:06:15 by javgonza          #+#    #+#             */
/*   Updated: 2021/01/28 12:40:54 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	cmt_bigint_compare(struct s_bigint *n1, \
											struct s_bigint *n2)
{
	size_t	i;

	i = 0;
	while (i < n1->size && n1->data[i] == n2->data[i])
		i++;
	if (n1->data[i] == n2->data[i])
		return (0);
	else if (n1->data[i] > n2->data[i])
		return (1);
	return (-1);
}
