/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 09:25:40 by javgonza          #+#    #+#             */
/*   Updated: 2020/08/24 12:18:19 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*holder;

	holder = (*lst)->next;
	(*lst)->next = new;
	(*lst)->next->next = holder;
}
