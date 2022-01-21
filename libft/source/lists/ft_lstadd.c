/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 09:15:37 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/26 12:26:13 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

/*
** NOTE: The contents is appended to occupy the index indicated
** Pushing all the rest of the elements forward
*/

void	ft_lstadd(t_list **lst, int index, void *content)
{
	t_list	*elem;
	t_list	*holder;

	if (index == 0)
	{
		ft_lstadd_front(lst, ft_lstnew(content));
		return ;
	}
	elem = ft_lstget(*lst, index - 1);
	holder = elem->next;
	elem->next = ft_lstnew(content);
	elem->next->next = holder;
}
