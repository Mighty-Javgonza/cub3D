/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 10:38:26 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:34:14 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	destroy_int(void *i)
{
	free(i);
}

int		main(void)
{
	t_list	*list;
	int		*i1;
	int		*i2;
	int		*i3;

	printf("--------NO SEGFAULT CHECK-------\n");
	i1 = malloc(sizeof(*i1));
	i2 = malloc(sizeof(*i2));
	i3 = malloc(sizeof(*i3));
	list = ft_lstnew(0);
	ft_lstput_back(&list, i1);
	ft_lstput_back(&list, i2);
	ft_lstput_back(&list, i3);
	ft_lstcdel(destroy_int, list);
	free(i1);
	free(i2);
	free(i3);
	printf("-----DIDN'T SEGFAULT TEST OK----\n");
}
