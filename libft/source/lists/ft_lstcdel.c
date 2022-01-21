/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:36:50 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:37:12 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
** Applies a custom deletion function to all elements on a list.
** After deleting elements it will free the list itself
*/

void	ft_lstcdel(void (*del_func)(void *), t_list *list)
{
	t_list	*list_ptr;
	t_list	*back_ptr;

	if (list == 0)
		return ;
	list_ptr = list;
	del_func(list_ptr->content);
	while (list_ptr->next != (void *)0)
	{
		back_ptr = list_ptr;
		list_ptr = list_ptr->next;
		del_func(list_ptr->content);
		free(back_ptr);
	}
	free(list_ptr);
}
