/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 09:07:13 by javgonza          #+#    #+#             */
/*   Updated: 2022/02/08 16:05:11 by javgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lists.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int		rvalue;
	t_list	*ptr;

	if (lst == NULL)
		return (0);
	rvalue = 1;
	ptr = lst;
	while (ptr->next != (void *)0)
	{
		rvalue++;
		ptr = ptr->next;
	}
	return (rvalue);
}
