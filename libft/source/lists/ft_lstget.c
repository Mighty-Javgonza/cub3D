/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 09:09:33 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/09 13:56:22 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

/*
** Returns the list object at the given index
*/

t_list	*ft_lstget(t_list *lst, int index)
{
	int		i;

	i = ft_lstsize(lst);
	if (index > i)
		return ((void *)0);
	i = 0;
	while (i < index)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
