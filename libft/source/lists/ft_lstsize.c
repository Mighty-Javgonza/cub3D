/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 09:07:13 by javgonza          #+#    #+#             */
/*   Updated: 2020/11/26 12:23:46 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"

int	ft_lstsize(t_list *lst)
{
	int		rvalue;
	t_list	*ptr;

	rvalue = 0;
	ptr = lst;
	while (ptr->next != (void *)0)
	{
		rvalue++;
		ptr = ptr->next;
	}
	return (rvalue);
}
