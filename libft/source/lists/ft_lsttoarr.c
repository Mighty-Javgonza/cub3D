/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:06:13 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/17 12:07:04 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"
#include <stdio.h>

/*
** Turns a list into an array of all the contents
** (NULL TERMINATED)
*/

void	*ft_lsttoarr(t_list *lst)
{
	void	**rvalue;
	size_t	i;

	rvalue = malloc(sizeof(void *) * (ft_lstsize(lst) + 2));
	i = 0;
	while (lst->next != 0)
	{
		rvalue[i] = lst->content;
		i++;
		lst = lst->next;
	}
	rvalue[i] = lst->content;
	rvalue[i + 1] = 0;
	return (rvalue);
}
