/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:08:46 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 11:05:44 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Deletes (for a list filled with malloced objects) a list.
** For special deletion(e.g structs), use ft_lstcdel
*/

#include "libft_lists.h"

void	ft_lstdel(t_list *list)
{
	t_list	*list_ptr;
	t_list	*back_ptr;

	list_ptr = list;
	if (!list_ptr->content)
		free(list_ptr->content);
	while (list_ptr->next != (void *)0)
	{
		back_ptr = list_ptr;
		list_ptr = list_ptr->next;
		free(back_ptr);
		if (list_ptr->content != 0)
			free(list_ptr->content);
	}
	free(list_ptr);
}
