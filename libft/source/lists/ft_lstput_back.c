/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstput_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 10:14:12 by javgonza          #+#    #+#             */
/*   Updated: 2020/12/09 13:41:42 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

void	ft_lstput_back(t_list **lst, void *content)
{
	t_list	*ptr;

	ptr = *lst;
	while (ptr->next != (void *)0)
		ptr = ptr->next;
	ptr->next = ft_lstnew(content);
}
