/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowest_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:20:34 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/26 12:25:38 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

/*
** Returns the lowest value from a list filled with doubles
*/

double	ft_lowest_d(t_list *dlist)
{
	double	lowest;
	double	current;
	t_list	*list_ptr;

	list_ptr = dlist;
	lowest = *(double *)(list_ptr->content);
	while (list_ptr->next != (void *)0)
	{
		list_ptr = list_ptr->next;
		current = *(double *)(list_ptr->content);
		if (current < lowest)
			lowest = current;
	}
	return (lowest);
}
